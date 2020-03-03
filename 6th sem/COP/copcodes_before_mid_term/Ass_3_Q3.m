
f=@(x)0.074*x.^4-0.284*x.^3+3.355*x.^2-12.183*x+5;

x1=15;
x2=20;
tol=0.01;
%Secant Method
n=100;
for i=1:1:n

    x3=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
    
    if(f(x2)-f(x1)<tol)
        break;
    end
    x1=x2;
    x2=x3;
    
    if(abs((x2-x1)/x1)<tol)
        break;
    end
    
end

root=x3;
root

%Newton Raphson
f_der=@(x)0.296*x.^3-0.852*x.^2+6.71*x-12.183;
x2=0;
x1=15;
for i=1:1:n
    x2=x1-(f(x1)/f_der(x1));
    if(abs((x2-x1)/x1)<tol)
        break;
    end
    x1=x2;
end
root2=x2;
root2