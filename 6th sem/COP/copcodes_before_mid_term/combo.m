function [result] = combo(f,t)
%UNTITLED5 Summary of this function goes here
%   Detailed explanation goes

n = length(t);

a = t(1);
b = t(n);


Q=[4,4.8,5.2,5.0,4.6,4.3,4.3,5.0];
c=[10,35,55,52,40,37,32,34];

y = Q.*c;
y



temp =0;
for i= 1:2:n-3
    temp = temp+ ((t(i+2)-t(i))/2)*(f(y(i))+4*f(y(i+1))+ f(y(i+2)));
end

emp = 0;
for i=n-1
    emp = emp+ ((t(n)-t(n-1))/2)*(f(y(i))+f(y(i+1)));
end

result = temp+emp;

end

