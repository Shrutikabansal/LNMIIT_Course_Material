clc;
clear all;
 close all;
 
 
 sum = 0;
 n = 1000;
 a = rand(1,n);
  b = rand(1,n);
   c = rand(1,n);
    d = rand(1,n);
     e = rand(1,n);
      f = rand(1,n);
       g = rand(1,n);
        h = rand(1,n);
         x = rand(1,n);
          y = rand(1,n);
         
sum=a+b+c+d+e+f+g+h+x+y;

avg = sum/10;
subplot(221);
hist(avg);


y = avg-mean(avg);
subplot(222)
hist(y);
subplot(223)
y1=2*y;
hist(y1);