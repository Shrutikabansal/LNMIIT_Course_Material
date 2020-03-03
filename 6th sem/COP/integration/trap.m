function [result] = trap(f,a,b)


h = 0.01;
x = a:h:b;
n = length(x);

ft = 0;
for i=2:n-1
    ft = 2*f(i)+ft;
end

result = ft+f(x1)+f(xn);


end

