clear all;
close all;

a=0;
b=3*pi;
f=@(x)sin(x.^2);
h=0.01;
n=floor((b-a)/h);
res=trap(f,a,b);

res

res2=compsimpson(f,a,b,n);

res2