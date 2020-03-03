function x=ngauss(C,b)
    
    a=[C b];
    n=3;
    x=zeros(n,1);
    %Forward elimination 
    for k=1:1:(n-1)
        for i=k+1:1:n
            u=a(i,k)/a(k,k);
            a(i,k)=0;
            for j=k+1:1:n
                a(i,j)=a(i,j)-u*a(k,j);
            end
        end
    end
    
    
    %Back substitution
    x(n,1)=a(n,n+1)/a(n,n);
    for i=(n-1):(-1):1
        temp=0;
        for j=i+1:1:n
            temp=temp+(a(i,j)*x(j));
        end
        x(i,1)=(a(i,n+1)-temp)/a(i,i);
    end
    
end