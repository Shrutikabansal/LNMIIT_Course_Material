clear all;
close all;

L=10;
Tinf=200;
Ta=300;
Tb=400;
h=0.05;
dx=0.1;
n=L/dx;

x=linspace(0,L,n);

T=zeros(1,n);
T(1)=Ta;
T(n)=Tb;

zg1=50;
f=@(T,x,z)z;
g=@(T,x,z)-h*(Tinf-T);

Tval1=heuns(f,g,T,x,zg1,h);
Tn1=Tval1(n);

plot(x,Tval1);
hold on;

zg2=70;
Tval2=heuns(f,g,T,x,zg2,h);
Tn2=Tval2(n);
plot(x,Tval2);


zc=zg1+((zg2-zg1)/(Tn2-Tn1))*(Tb-Tn1);
Tval_c=heuns(f,g,T,x,zc,h);

plot(x,Tval_c);
legend('Tval1','Tval2','Tval');
hold off;


