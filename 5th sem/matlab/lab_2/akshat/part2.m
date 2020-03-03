%%Akshat Jethlia     16ucc102

%clear all;
close all;

A=1;
f=3000;
Fs=8000;
N=4; %No of cycles
n=1:1:(N*(Fs/f)-1);

X= A*cos(2*pi*n*(f/Fs));

subplot(2,1,1);
stem(n,X);
title('Original sampled signal');
xlabel('n');
ylabel('Amplitude');

L=8;
Q=myquantizer(X,L);

%Y = [X,Q];
subplot(2,1,2);
stem(n,Q);
title('Quantized signal');
xlabel('n');
ylabel('Amplitude');

%%To calculate mean square error
mserr=immse(X,Q);

%Theoritical value
SQNR_dB= 1.76 +6.02*(log(L)/log(2));
%(in dB)

SQNR=3/2*(2^(2*log(L)/log(2)));