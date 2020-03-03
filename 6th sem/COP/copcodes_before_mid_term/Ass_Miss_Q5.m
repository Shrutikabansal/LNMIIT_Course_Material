%Assignment: Miscellaneous
%%Q5) Integration trapazoidal and Simpson's 1/3 rule
clear all;

Q=[4,4.8,5.2,5.0,4.6,4.3,4.3,5.0];
c=[10,35,55,52,40,37,32,34];

x=Q.*c;
t=[0,10,20,30,35,40,45,50];

f=@(y)y;
a=t(1);
n=length(x);
b=t(n);
h=0.01;
n=floor((b-a)/h)+1;
res=compsimpson(f,a,b,n);
res
