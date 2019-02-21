x=0:0.1:5;
y=0:0.1:3;
[xx,yy]=meshgrid(x,y);
z = zeros(size(xx));
a = 5;
b = 3


for i = 1:2:100
  
zz=20/pi/i/sinh(i*pi*b/a)*sinh(i*pi*yy/a).*sin(i*pi*xx/a);
z = z+zz;
end

surf(xx,yy,z)
xlabel('x')
ylabel('y')
title('我们选定a=5,b=3,U=5得到此图')

% syms d(r)
% d = r^2
% 
% r =3 
% d
% 
% b=3 
% a = 5

% 
% x=0:0.1:5;
% y=0:0.1:3;
% [xx,yy]=meshgrid(x,y);
% zz=20/pi*1/(i.*sinh(i*pi*3/5))*sinh(i*pi.*yy/5).*sinh(i*pi.*xx/5)
% 
% surf(xx,yy,zz)
% xlabel('x')

