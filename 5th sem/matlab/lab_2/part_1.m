clc;
clear all;
close all;

A=1;
F=3000;
Fs=100000;
N=4;

n=0:1:N*(Fs/F)-1;

x=A*cos(2*pi*n*F/Fs);
stem(x);
