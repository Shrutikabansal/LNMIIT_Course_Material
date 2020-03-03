%%Sub function

function v=Class_3_2(t,m,d);
    
    v=vel(t,m,d);

end

function v=vel(t,m,d)       % It will be a subfunction

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

%v1=vel(12,70,0.25);        It will give an error since vel is a
%subfunction