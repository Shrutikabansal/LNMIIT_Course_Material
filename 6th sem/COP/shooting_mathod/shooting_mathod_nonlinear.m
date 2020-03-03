clc;
clear all;
close all;

l=10;
tinf=200;
h=0.05;
dx=0.1;
sigma= 2.7*((10)^(-10));
%m=l/dx;

x = 0:dx:l;
n=length(x);

t = zeros(1,n);             %%%% t is temp.%%%%
t(1)=300;
t(n)=400;
t1=300;
tn=400;

g= @(x,t,z) z;
f= @(x,t,z) -1*h*(tinf-t)-sigma*((tinf^4)-(t^4));


zg1 = -30;
zg2 = 30;
tval1= heuns(f,g,zg1,h,tn,t1);
tval2= heuns(f,g,zg1,h,tn,t1); 

zc = zg1+((zg2-zg1)/(tval2-tval1))*(t(n)-t(n-1));


plot(x,t);
