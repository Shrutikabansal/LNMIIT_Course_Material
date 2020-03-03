function c=tridiag(e,f,g,r)

    n=length(f);
  
    for i=2:1:n

        f(i)=f(i)-g(i-1)*(e(i)/f(i-1));
        r(i)=r(i)-r(i-1)*(e(i)/f(i-1));
        e(i)=0;
        
    end

    %Back substitution
    c=zeros(1,n);
    
    c(n)=0;
    for i=n-1:-1:2

        c(i)=(r(i)-g(i)*c(i+1))/f(i);
    
    end
    c(1)=0;
    c
end