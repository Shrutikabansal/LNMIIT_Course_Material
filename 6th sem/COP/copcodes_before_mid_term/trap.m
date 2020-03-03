function res=trap(f,a,b)

    h=0.01;
    x=a:h:b;
    
    n=length(x);
    
    temp=0;
    for i=2:n-1
        temp=temp+f(x(i));
    end
    res=(h/2)*(f(x(1))+2*temp+f(x(n)));

end