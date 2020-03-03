function T=heuns(f,g,T,x,zg1,h)
    
    n=length(T);
    for i=1:n-1
        s1=f(T(i),x(i),zg1);
        p1=g(T(i),x(i),zg1);
        s2=f(T(i)+s1*h,x(i+1),zg1+p1*h);
        p2=g(T(i)+s1*h,x(i+1),zg1+p1*h);
        
        T(i+1)=T(i)+h/2*(s1+s2);
        zg1=zg1+h/2*(p1+p2);
    end

end