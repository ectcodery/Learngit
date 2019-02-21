z=0:0.1:20;
tao = 1;
beta=1;

y  =  (1+tao^2+2*tao*cos(2*z)).^(0.5)
plot(z,y)
