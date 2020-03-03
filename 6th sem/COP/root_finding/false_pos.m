function [root] = false_pos(x1, x2, f, tol)
%UNTITLED4 Summary of this function goes here
%   Detailed explanation goes here

x3 = 0;



while(abs(f(x2)) > tol && abs((x1-x2)/x1) > tol)
    
        x3=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
        
        if(f(x1)*f(x3)<0)
            %x1 = x1;
            x2 = x3;
            
        else
            x1 = x3;
        end
        

end 
   root  = x3;     

disp(f(x3));

end

