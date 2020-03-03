clc;
clear all;
close all;

N = 1000;
x1 = rand(1,N);
x2 = rand(1,N);
x3 = rand(1,N);
x4 = rand(1,N);
x5 = rand(1,N);
y = x1+x2+x3+x4+x5;
y1 = y - mean(y);
y2 = 3*y1;
y4 = randn(1,N);

hist(x1);
figure,
hist(y);
figure,
hist(y1);
figure,
hist(y2);
figure,
hist(y4);
