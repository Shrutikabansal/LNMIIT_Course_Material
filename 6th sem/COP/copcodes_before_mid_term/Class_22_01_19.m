% Naive Gauss eliminaion process

k1=3;
k2=2;
k3=5;
m1=0.07;
m2=0.065;
m3=0.75;
g=9.8;
C=[k1+k2,-k2,0;-k2,k1+k3,-k3;0,-k3,k3];
b=g*[m1;m2;m3];
x=[0;0;0];
x=ngauss(C,b);

x_inbuilt= C\b;
x