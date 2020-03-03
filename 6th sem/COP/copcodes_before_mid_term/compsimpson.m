function res=compsimpson(f,a,b,n)
    
    if(mod(n,2)~=0)
        %%When n is odd
    
        h=(b-a)/(n-1);
        x=a:h:b;
        
        temp=0;
        for i=2:2:n-1
    
            temp=temp+f(x(i));
        
        end
        temp2=0;
        for i=3:2:n-2
    
            temp2=temp2+f(x(i));
        
        end
        n
        res=(h/3)*(f(x(1))+4*temp+2*temp2+f(x(n)));
    
    else
        %%When n is even
        
        h=(b-a)/(n-1);
        x=a:h:b;
        temp=0;
        for i=2:2:n-2
    
            temp=temp+f(x(i));
        
        end
        temp2=0;
        for i=3:2:n-3
    
            temp2=temp2+f(x(i));
        
        end
        res_temp=(h/3)*(f(x(1))+4*temp+2*temp2+f(x(n)));
        temp3=(h/2)*(f(x(n-1))+f(x(n)));
        res=res_temp+temp3;
    end
    
end