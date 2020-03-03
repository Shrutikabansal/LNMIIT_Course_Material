function k = Binary(x,xf)
    n=length(x);
    if(x(n)<xf)
        disp('Xf not in the range of x1 and xn');
    else
        iL=1;
        iU=n;
        while(1)
            if ((iU-iL)<=1)
                break;
            end
            iM=floor((iL+iU)/2);
            if (x(iM)<xf)
                iL=iM;
            else
                iU=iM;
            end
        end
    end
    k=iL;
end

