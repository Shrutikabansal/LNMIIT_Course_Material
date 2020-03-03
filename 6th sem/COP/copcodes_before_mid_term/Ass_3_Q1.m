close all;
clear all;

x1=-1;
x2=0;
tol=0.01;

f= @(x)-12-21*x+18*x.^2-2.75*x.^3;

%%Graphically 

x_val=-1000:1:1000;

fval=f(x_val);
figure();
plot(x_val,fval);
xlabel('value of x');
ylabel('function values');
grid('on');

%%Bracket Method

%1) Bisection

if(f(x1)*f(x2)>0)
    disp('Bracket do not enclose root');
else
    while(1)
        x3=(x1+x2)/2;
        
        if(f(x1)*f(x3)<0)
            x2=x3;
        else
            x1=x3;
        end
        
        if(abs((x2-x1)/x1)<tol)
            break;
        end
    
    end
    root=x3;
    disp(x3);
    disp(f(root));
end

%False Position

if(f(x1)*f(x2)>0)
    disp('Bracket do not enclose root');
else
    while(1)
        if(abs(f(x2)-f(x1))<tol)
            break;
        end
        x3=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
        
        if(f(x1)*f(x3)<0)
            x2=x3;
        else
            x1=x3;
        end
        
        if(abs((x2-x1)/x1)<tol)
            break;
        end
    
    end
    root=x3;
    disp(x3);
    disp(f(root));
end


