function [v] = freefall2(t,m,d)
v = vel(t,m,d)
end
%freefall : bungee velocity with drag 
%v = freefall(t,m,d) compute the free fall velocity
%                   of an object with 2nd order drag
% inputs : 
% t : time(sec)
% m : mass(kg)
% d : drag(kg/m)

% outputs:
% v : downward velocity(m/s)
function [v] = vel(t,m,d)
g = 9.81 ;       % m/s^2
 v = sqrt(g*m/d)*tanh(sqrt(g*d/m)*t);


end

 