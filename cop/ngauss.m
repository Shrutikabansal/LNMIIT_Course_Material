function [x] = ngauss(c,b,n)
% naive gauss elimination process
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
a = zeros(n,n+1);
%x = zeros(1,n);
a = [c b];


x(n)= (a(n,n+1))/a(n,n);
for i=n-1:1
    temp = 0;
    for j=i+1:n
        temp = temp + a(i,j)*x(j);
    end
    x(i) = (a(i,n+1)-temp)/a(i,i);
end
    
end

