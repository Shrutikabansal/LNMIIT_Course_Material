function [root] = bisection(x1, x2, f, tol)
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here
x3 = 0;



while(abs((x1-x2)/x1) > tol)
    
        x3=(x1+x2)/2;
        
        if(f(x1)*f(x3)<0)
            %x1 = x1;
            x2 = x3;
            
        else
            x1 = x3;
        end
        
        %%%%%%%%%%%%%%%%%
       %or we can do as:
       %while(1)
    
        %x3=(x1+x2)/2;
        
        %if(f(x1)*f(x3)<0)
            %x1 = x1;
         %   x2 = x3;
            
       % else
        %    x1 = x3;
        %end
        
       %if(abs((x1-x2)/x1) < tol)
        %    break;
        %end
        
        %%%%%%%%%%%%%%%%%%%%
        
      %  if(((f(x2)-f(x1))/x1)<tol)   for false position
      %      break;
       % end
           
end 
   root  = x3;     

disp(f(x3));

end

