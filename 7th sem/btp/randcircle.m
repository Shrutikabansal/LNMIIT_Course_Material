function [x,y] = randcircle(n,radius)
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes heretheta = rand(1,n)*(2*pi);

xc =  0;
yc = 0;
theta = rand(1,n)*(2*pi);
r = sqrt(rand(1,n))*radius;
x = xc + r.*cos(theta);
y = yc + r.*sin(theta);
end

