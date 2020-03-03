clc;
clear all;
close all;

x = randi([0,1],1,10000);
bpsk = zeros(1,10000);
bpsk1 = zeros(1,10000);
for n=1:10000
    if(x(n)==0)
        bpsk(n) = -1;
    else
        bpsk(n) = 1;
    end
end

h = randn(1,10000) + 1j*randn(1,10000);
noise = randn(1,10000) + 1j*randn(1,10000);

snrd = zeros(1,7);
a = 0;
for r=1:7
    snrd(r) = a;
    a = a+4;
end

sigma = zeros(1,7);
snrl = zeros(1,7);
perror = zeros(1,7);
terror = zeros(1,7);

for r=1:7
    snrl(r) = 10^(snrd(r)/10);
    sigma(r) = sqrt(10.^(-snrl(r)/10));
    y = h.*bpsk + noise*sigma(r);
    y = y./h;
    for n=1:10000
        if(real(y(n))>0)
            bpsk1(n) = 1;
        else
            bpsk1(n) = 0;
        end
    end
    perror(r) = mean(abs(x-bpsk1));
    %perror(r) = sum(abs((x-bpsk1)/2))/10000;
    terror(r) = 0.5*(1-sqrt(snrl(r)/(2+snrl(r))));
end

figure;
semilogy(snrd,perror);
hold on 
semilogy(snrd,terror);
legend('Practical','Theory');