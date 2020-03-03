clc;
clear all;
close all;

A=1;
F=3000;
Fs=8000;
N=5;
l=8;

n=0:1:N*(Fs/F)-1;

x=A*cos(2*pi*n*F/Fs);
x1=A+x;
%figure;
subplot(3,1,1);
stem(n,x1,'r');
xlabel('n');
ylabel('amplitude');
title('original sampled signal');
grid on;
hold on;





Q=myquantizer(x1,l);

subplot(3,1,2);
stem(n,Q,'b');grid on;
hold on;
xlabel('n');
ylabel('amplitude');
title('quantized signal');

signal_power=(A^2)/2;
mser=mean((x1-Q).^2);
sqnr_prac = 10*log10(signal_power/mser);

SQNR=(3/2)*(2^(2*log(l)/log(2)));

SQNR_db=1.76+6.02*(log(l)/log(2));
subplot(3,1,3)
stem(l,sqnr_prac);
xlabel('l');
ylabel('SQNR_prac');
title('sqnr');