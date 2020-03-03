clc;
clear all;
close all;
n=3;
c = zeros(n,n);
b = zeros(n,1);


g = 9.8;
k1 = 10;    k2 = 15;   k3 = 20;
m1 = 0.07;  m2 = 0.065; m3 = 0.075;

c = [k1+k2, -1*k2, 0, -1*k2, k2+k3, -1*k3, 0, -1*k3, k3];
b = g*[m1, m2, m3];
x = ngauss(c,b,n);
