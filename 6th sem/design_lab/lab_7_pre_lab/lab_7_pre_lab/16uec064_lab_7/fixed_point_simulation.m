clc;
clear all;
close all;
 
x=1;
h = round(0.3*(2^8));
n = round(0.01*0.2*(2^8));
y = (h*x+n)*(2^8);
dec = ceil((y/h)*(2^8));
if((dec>0))
    dec=1;
else
    dec=0;
   
end

error = dec-x