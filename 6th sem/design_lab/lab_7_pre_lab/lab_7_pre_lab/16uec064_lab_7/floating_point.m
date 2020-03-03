clc;
clear all;
close all;
 
x=1;
h = 0.3;
n = 0.01*0.2;
y = h*x+n;
dec = y/h;
if((dec>0))
    dec=1;
else
    dec=0;
   
end

error = dec-x;