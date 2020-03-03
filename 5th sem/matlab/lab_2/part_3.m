clc;
clear all;
close all;




F=3000;
Fs=8000;
N=4;
l=64;
n=0:1:N*(Fs/F)-1;
x=zeros(1,10);
SQNR=zeros(1,10);
SQNR_db=zeros(1,10);
y=cos(2*pi*n*F/Fs);

for A=0.1:0.1:1
    x(A*10)=A*y;
    figure;
    stem(x(A*10));
    
    Q=myquantizer(x(A*10),l);
    figure;
    stem(Q(A*10));
end

