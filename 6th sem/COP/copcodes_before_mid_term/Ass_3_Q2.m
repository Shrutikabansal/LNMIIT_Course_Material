close all;
clear all;

x1=0.1;
x2=5;
tol=0.001;

f= @(y)((y.^6)/8+((9*(y.^5))/4)+(13.5*(y.^4))+(27*(y.^3)))*9.81-400*y-1200;

%%Graphically 

y_val=0.1:0.1:2;

fval=f(y_val);
figure();
plot(y_val,fval);
xlabel('depth of the channel');
ylabel('function value');
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
    disp(f(x3));
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
    disp(f(x3));
end


