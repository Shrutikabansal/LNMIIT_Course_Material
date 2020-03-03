clc;
clear all;
close all;

g = 9.81;
q = 20;

y = 0.1:0.001:2;

b = 3+y;
disp('b');
disp(b);
ac = 3.*y+(y.^2/2);
disp('ac');
disp(ac);
f = 1 - ((q^2).*b./(g*ac.^3));
disp('func');
disp(f);
plot(y,f);
grid on;
