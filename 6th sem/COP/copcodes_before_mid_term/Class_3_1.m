function v=Class_3_1(t,m,d)

    %Freefall: bunjee velocity with drag
    %v=freefall(t,m,cd) compute the freefall velocity of an object with
    %second order drag
    %Input: t time (sec)
    %m: mass (kg)
    %d: drag (kg/m)
    %Output: v: downward velocity (m/s)
    
    g=9.81; %m/sec2
    
    v= sqrt(g*m/d)*tanh(sqrt(g*d/m)*t);
    
end