function yf=laginterp(x,y,xf)
    
    n=length(x);
    yf=0;
    
    if(length(x)~=length(y))
        t = 1;
    else
        for i=1:1:n
            temp=1;
            %yf=yf+y(i)*temp;
            for j=1:1:n
                if(i~=j)
                    temp=temp*(xf-x(j)/x(i)-x(j));
                end
            end
            yf=yf+y(i)*temp;
        end
    end

end