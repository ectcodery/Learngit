t = 2.855;% 晶胞参数
A = [0 0 0;0 1 0; 0 2 0;0 3 0;% 棱角处原子
    1 0 0;1 1 0; 1 2 0;1 3 0;
    2 0 0;2 1 0; 2 2 0;2 3 0;
    3 0 0;3 1 0; 3 2 0;3 3 0;
    0 0 1;0 1 1; 0 2 1;0 3 1;
    1 0 1;1 1 1; 1 2 1;1 3 1;
    2 0 1;2 1 1; 2 2 1;2 3 1;
    3 0 1;3 1 1; 3 2 1;3 3 1;
    0 0 2;0 1 2; 0 2 2;0 3 2;
    1 0 2;1 1 2; 1 2 2;1 3 2;
    2 0 2;2 1 2; 2 2 2;2 3 2;
    3 0 2;3 1 2; 3 2 2;3 3 2;
    0 0 3;0 1 3; 0 2 3;0 3 3;
    1 0 3;1 1 3; 1 2 3;1 3 3;
    2 0 3;2 1 3; 2 2 3;2 3 3;
    3 0 3;3 1 3; 3 2 3;3 3 3;
  ];
A = A*t;

x1=A(:,1);y1=A(:,2);z1=A(:,3);
scatter3(x1,y1,z1,'k','MarkerFaceColor','k')% 棱角处原子散点图
%% 

B = [ 0.5 0.5 0.5;0.5 1.5 0.5;0.5 2.5 0.5;% 体中心处原子
  1.5 0.5 0.5;1.5 1.5 0.5;1.5 2.5 0.5;
  2.5 0.5 0.5;2.5 1.5 0.5;2.5 2.5 0.5;
  0.5 0.5 1.5;0.5 1.5 1.5;0.5 2.5 1.5;
  1.5 0.5 1.5;1.5 1.5 1.5;1.5 2.5 1.5;
  2.5 0.5 1.5;2.5 1.5 1.5;2.5 2.5 1.5;
  0.5 0.5 2.5;0.5 1.5 2.5;0.5 2.5 2.5;
  1.5 0.5 2.5;1.5 1.5 2.5;1.5 2.5 2.5;
  2.5 0.5 2.5;2.5 1.5 2.5;2.5 2.5 2.5;];
B = B*t;

hold on 
x2=B(:,1);y2=B(:,2);z2=B(:,3);
scatter3(x2,y2,z2,'bH')% 体中心处原子散点图

%% 

p = t*[1 1 3] +[0 0 2]; % 圆心
r = 4.2;   % 半径
scatter3(p(1),p(2),p(3),'yp')  %圆心点
[x3,y3,z3]=sphere(30);%30是画出来的球面的经纬分面数...30的话就是30个经度, 30个纬度
x3=p(1)+r*x3;           % 圆心:(4,2,0)   半径:7
y3=p(2)+r*y3;
z3=p(3)+r*z3;
surf(x3,y3,z3)
xlabel('x')
ylabel('y')
zlabel('z')
axis equal
alpha(0.7)         %设置透明度
shading flat       %去掉那些线

%% 

Ai = length(A);
Bi = length(B);
A1 = [];
B1 = [];
dt = [];
pp = [];
for i  = 1:Ai
    d = norm(A(i,:) - p);
    if(d<=r)
    A1 = [A1;A(i,:)];
    dt = [dt; d];
    end
end
    
 for i  = 1:Bi
    d = norm(B(i,:) - p);
    if(d<=r)
    B1 = [B1;B(i,:)];
    dt = [dt; d];
    end
 end
    
 A1;
 B1;
 dt;
As =  size(A1);
Bs = size(B1);
 
if(length(A1)>0)
    x3=A1(:,1);y3=A1(:,2);z3=A1(:,3);
    scatter3(x3,y3,z3,'rD','MarkerFaceColor','r')% 棱角处原子散点图
end

if(length(B1)>0)
    x4=B1(:,1);y4=B1(:,2);z4=B1(:,3);
    scatter3(x4,y4,z4,'rD','MarkerFaceColor','r')% 体中心处原子散点图
end

str = ['共有' num2str(As(1)+Bs(1)) '个原子在截断距离内'];
disp(str)
%% 

pp = [A1;B1]
pp = [pp dt]

f1 = [ 0 0 0];
l = length(pp);
for i = 1:l
    f = V(pp(i,4));
    rr = p-pp(i,1:3);
    f = f*rr/norm(rr);
    f1 = f1+f;
end
f1
    



    




