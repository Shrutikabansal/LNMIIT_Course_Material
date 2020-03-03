function yf=cubicspline(x,y,xf)

    n=length(x);
    if(length(x)~=length(y) && xf<x(1) && xf>x(n))
        disp('Length of x and y not equal or xf is not between x1 and xn');
    else
    
        for i=1:n-1
            h(i)=x(i+1)-x(i);
        end
        
        e=[0,h(1:n-2),0];
        g=[0,h(2:n-1),0];
        f(1)=1;
        for i=2:n-1
            f(i)=2*(h(i-1)+h(i));
        end
        f(n)=1;
        r(1)=0;
        for r=2:n-1
        
            r(i)=(3*(y(i+1)-y(i))/h(i))-(3*(y(i)-y(i-1))/h(i-1));
            
        end
        r(n)=0;
        c=tridiag(e,f,g,r);
        
        for i=1:n-1
            a(i)=y(i);
            b(i)=((y(i+1)-y(i))/h(i))-((h(i)/3)*(2*c(i)+c(i+1)));
            d(i)=(c(i+1)-c(i))/(3*h(i));
        end
        k=Binary(x,xf);
        k
        yf=a(k)+b(k)*(xf-x(k))+c(k)*((xf-x(k))^2)+d(k)*((xf-x(k))^3);
        yf
    end

end