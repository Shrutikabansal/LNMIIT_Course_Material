function y=henn(x,y1,f,h)
    
    n=length(x);
    y=zeros(1,n);
    y(1)=y1;
    for i=1:n-1
    
        s1=f(x(i),y(i));
        s2=f(x(i)+h,y(i)+(h*s1));
        y(i+1)=y(i)+((h/2)*(s1+s2));
        
    end
end