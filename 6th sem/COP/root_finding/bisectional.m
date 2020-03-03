clc;
clear all;
close all;

tol = 0.01;
x1 = -1;
x2 = 0;


%f(x) = -12-21.*x+18.*x.^2-2.75.*x.^3;

f = @(x) -12-21*x+18*x^2-2.75*x^3;

root1  = bisection(x1, x2, f, tol)

root2 = false_pos(x1, x2, f, tol)
