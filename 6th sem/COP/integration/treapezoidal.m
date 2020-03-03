clc;
clear all;
close all;
 
a=0;
b=3*pi;

f = @(x) sin(x.^2);

result = trap(f,a,b)