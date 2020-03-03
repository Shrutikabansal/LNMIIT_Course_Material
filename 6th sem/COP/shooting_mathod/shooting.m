clc;
clear all;
close all;

l=10;
tinf=200;
h=0.05;
dx=0.1;

%m=l/dx;

x = 0:dx:l;
n=length(x);

t = zeros(1,n);             %%%% t is temp.%%%%
t(1)=300;
t(n)=400;

zg1 = -30;
zg2 = 30;
%tval1= ;
%tval2= ;

g= @(x,t,z) z;
f= @(x,t,z) -1*h*(tinf-t);

for i=1:n-1

    
    
end

zc = zg1+((zg2-zg1)/(tval2-tval1))*(t(n)-t(n-1));

plot(x,t);
