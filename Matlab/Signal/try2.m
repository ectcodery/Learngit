fs = 10e3;
t = -0.1:1/fs:0.1;

w = 40e-3;
w  = 0.1;
c = -0.7


x = tripuls(t,w,c);
plot(t, x)
axis([-0.2 0.2 -0.2 1.2])