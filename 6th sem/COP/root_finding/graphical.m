clc;
clear all;
close all;

x = -1:1 ;

y = x-cos(x);
plot(x,y);


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

x = 0:12;
y = -12-21.*x+18.*x.^2-2.75.*x.^3;
plot(x,y);