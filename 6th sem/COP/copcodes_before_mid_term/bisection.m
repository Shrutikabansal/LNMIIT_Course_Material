function root=bisection(f,x1,x2,tol)
    
    if (f(x1)*f(x2)>0)
        print('x1 and x2 do not bracket the root');
    else
        while(1)
        
            x3=(x1+x2)/2;
            if(f(x1)*f(x3)<0)
                x2=x3;
            else
                x1=x3;
            end
        
            if(abs((x1-x2)/x1)<tol)
                break;
            end
        end
    end
    root=x3;
end