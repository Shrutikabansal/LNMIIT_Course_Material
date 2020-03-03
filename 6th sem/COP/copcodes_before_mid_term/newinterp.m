function Yf=newinterp(x,y,n,xf)

    B=zeros(n);
    
    for i=1:1:n
        B(i,1)=y(i);
    end
    if length(x)==length(y)
        
        for j=2:1:n
            for i=1:1:n-j+1
        
                B(i,j)=(B(i+1,j-1)-B(i,j-1))/(x(i+j-1)-x(i));
            
            end
        end
        Yf=0;
        factor=1;
        for i=1:1:n
            Yf=B(1,i)*factor+Yf;
            factor=xf-x(i);
        end
        
    else
        print('size of x and y are not equal');
    end
    
end