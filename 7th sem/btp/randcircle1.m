% Data
n = 10000;
radius = rand;
xc = randn;
yc = randn;

% Engine
theta = rand(1,n)*(2*pi);
r = sqrt(rand(1,n))*radius;
x = xc + r.*cos(theta);
y = yc + r.*sin(theta);

% Check
plot(x,y,'.')

% Bruno