%%Akshat Jethlia     16ucc102

%clear all;
close all;

A=0.5;
f=3000;
Fs=80000;
N=4; %No of cycles
n=0:1:(N*(Fs/f));

X= A*cos(2*pi*n*(f/Fs));

figure;
stem(n,X);
title('Original sampled signal');
xlabel('n');
ylabel('Amplitude');

L=8;
Q=myquantizer(X,L);

%Y = [X,Q];
figure;
stem(n,Q);
title('Quantized signal');
xlabel('n');
ylabel('Amplitude');

% Z=encoding(X,L);
% figure;
% stem(n,Z);