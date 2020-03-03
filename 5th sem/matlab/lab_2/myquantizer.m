function [y] = myquantizer(x,l)
%UNTITLED4 Summary of this function goes here

%   Detailed explanation goes here




xmax=max(x);
xmin=min(x);
step=(xmax-xmin)/(l);
m=length(x);

y=zeros(1,m);

for a=1:1:m
    
    level=((x(a)-xmin)/step);
       if level==step*0.5
           level=level-step;
       else
           level=round(level);
       end
       
    
    y(a)=(level*step) +xmin;
    
end


end

