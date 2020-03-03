clc;
close all;
clear;
x = -1;
h1 = randn(1,1);
h2 = randn(1,1);
n1 = randn(1,1);
n2 = randn(1,1);
y1 = h1*x+0*n1;
y2 = h2*x+0*n2;
dec1 = (conj(h1)*y1)/(h1^2+h2^2);
dec2 = (conj(h2)*y2)/(h1^2+h2^2);
dec3 = dec1+dec2;