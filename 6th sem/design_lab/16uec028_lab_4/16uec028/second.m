clc;
clear all;
close all;
N = 10000;
x = randi([0,1],1,N);
qpsk = zeros(1,N/2);
k=1;
for i=1:2:N
    if x(i)==0 && x(i+1)==0
        qpsk(k)=1+1j;
    elseif x(i)==0 && x(i+1)==1
        qpsk(k)=-1+1j;
    elseif x(i)==1 && x(i+1)==0
        qpsk(k)=-1-1j;
    else
        qpsk(k)=1-1j;
    end
    k=k+1;
end

cnoise = randn(1,N/2) + 1j*randn(1,N/2);
h = randn(1,N/2) + 1j*randn(1,N/2);


perror = zeros(1,7);
snrd = zeros(1,7);
a=0;
for r=2:7
    a = a + 4;
    snrd(r) = a;
end
snrl = zeros(1,7);
for r=1:7
    snrl(r) = 10^(snrd(r)/10);
    sigma = sqrt(10.^(-snrl(r)/10));
    y = h.*qpsk + sigma*cnoise;
    y = y./h;
    qpsk1 = zeros(1,N);
    k=1;
    for n=1:1:N/2
        if(real(y(n))>0 && imag(y(n))>0)
            qpsk1(k) = 0;
            qpsk1(k+1) = 0;
        elseif(real(y(n))<0 && imag(y(n))>0)
            qpsk1(k) = 0;
            qpsk1(k+1) = 1;
        elseif(real(y(n))<0 && imag(y(n))<0)
            qpsk1(k) = 1;
            qpsk1(k+1) = 0;
        else
            qpsk1(k) = 1;
            qpsk1(k+1) = 1;
        end
        k=k+2;
    end
    perror(r) = mean(abs(x-qpsk1));  
end
figure;
semilogy(snrd,perror);
legend('Practical');