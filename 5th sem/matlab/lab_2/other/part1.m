%%Akshat Jethlia     16ucc102

clear all;
close all;

A=1;
f=3000;
Fs=100000;
N=4; %No of cycles
n=0:1:(N*(Fs/f));

X= A*cos(2*pi*n*(f/Fs));

figure;
stem(n,X);