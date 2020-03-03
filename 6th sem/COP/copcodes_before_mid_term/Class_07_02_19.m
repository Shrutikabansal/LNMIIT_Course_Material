clear all;
close all;

%x=[3,4.5,7,9];
%y=[2.5,1,2.5,0.5];
%x=[3,6,9,12];
%y=[1,5,3,6];

x=[1,4,17,21];
y=[3,8,51,120];
xf=5;

yf=cubicspline(x,y,xf);

plot(x,y,'b-',xf,yf,'ro');