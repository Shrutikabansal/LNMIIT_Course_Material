

clc;
clear all;
close all;
N = 10000;
x = randi([0,1],1,N);
for i = 1:N/2
    x1(i) = x(2*i);
    x2(i) = x(2*i-1);
end

xqpsk = zeros(1,N/2);
for i =1:N/2
if (x1(i) == 0 && x2(i) == 0)
    xqpsk(i) = exp(1j*pi/4);
elseif(x1(i) == 0 && x2(i) == 1)
    xqpsk(i) = exp(1j*3*pi/4);
elseif(x1(i) == 1 && x2(i) ==0 )
    xqpsk(i) = exp(1j*7*pi/4);
elseif(x1(i) == 1 && x2(i) == 1)
    xqpsk(i) = exp(1j*5*pi/4);
end
end

SNRdB=0:24;
    v1 = randn(1,N/2)+ 1j*randn(1,N/2);
    v2 = randn(1,N/2)+ 1j*randn(1,N/2);
    
      v = [v1;v2];
   
h1 = (randn(1,N/2) + 1j*randn(1,N/2))*(1/sqrt(2));
h2 = (randn(1,N/2) + 1j*randn(1,N/2))*(1/sqrt(2));
h = [h1;h2];
    
   
 
for t = 1:length(SNRdB)
y1 = zeros(1,N);
y2 = zeros(1,N);

SNR = 10^(SNRdB(t)/10);

No_sd = 1/sqrt(2*SNR);

y = xqpsk.*h + No_sd *0* v;
for r = 1:N/2
dec(1,r) = xqpsk(1,r) + ((conj(h1(1,r))*(v1(1,r)*No_sd) + conj(h2(1,r))*(v2(1,r)*No_sd)))/((h1(1,r)*conj(h1(1,r)))+(h2(1,r)*conj(h2(1,r)))) ;
end
B1 = zeros(1,N/2);
B2 = zeros(1,N/2);

for i = 1:N/2
    if ( real(dec(i)) > 0 && imag(dec(i)) > 0 )
        B1(i) = 0;
        B2(i) = 0;
    elseif( real(dec(i)) < 0 && imag(dec(i)) > 0)
        B1(i) = 0;
        B2(i) = 1;
    
    elseif( real(dec(i)) < 0 && imag(dec(i)) < 0)
        B1(i) = 1;
        B2(i) = 1;
    elseif( real(dec(i)) > 0 && imag(dec(i)) < 0)
        B1(i) = 1;
        B2(i) = 0;
    end

end
z = zeros(1,N);
for i = 1:N/2
    z(2*i) = B1(i);
    z(2*i-1) = B2(i);
end

err=sum(abs(z-x));
BER(t) = err/N;

end

semilogy(SNRdB,BER);
ylabel('Practical Bit error rate');
xlabel('SNR in dB');
