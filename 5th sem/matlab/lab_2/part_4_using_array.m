clc;
clear all;
close all;


A=1;
F=3000;
Fs=8000;
N=5;
l=[16 32 64];

n=0:1:N*(Fs/F)-1;

x=A*cos(2*pi*n*F/Fs);
x1=x+A;
%stem(x);

Q=myquantizer(x1,l);
%Q2=myquantizer(x1,l2);
%Q3=myquantizer(x1,l3);



signal_power=(A^2)/2;
mser1=mean((x1-Q).^2);
sqnr_prac1 = 10*log10(signal_power/mser1);
stem(l,sqnr_prac1);



% mser2=mean((x1-Q2).^2);
% sqnr_prac2 = 10*log10(signal_power/mser2);
% 
% 
% mser3=mean((x1-Q3).^2);
% sqnr_prac3 = 10*log10(signal_power/mser3);
% 
% figure;
% stem(l1,sqnr_prac1,'r');
% hold on;
% grid on;
% 
% stem(l2,sqnr_prac2,'b');
% hold on;
% grid on;
% 
% 
% stem(l3,sqnr_prac3);

xlabel('l');
ylabel('SQNR_prac');
title('quantized noise power vs l');
