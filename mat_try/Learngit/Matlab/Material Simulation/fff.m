function fr = fff(xx, yy)
%F 此处显示有关此函数的摘要
%   此处显示详细说明
t = 2.855;% 晶胞参数
A= [0 0 0;0 1 0; 0 2 0;0 3 0;0 4 0;% 棱角处原子
    1 0 0;1 1 0; 1 2 0;1 3 0;1 4 0;
    2 0 0;2 1 0; 2 2 0;2 3 0;2 4 0;
    3 0 0;3 1 0; 3 2 0;3 3 0;3 4 0;
    4 0 0;4 1 0; 4 2 0;4 3 0;4 4 0;
    0 0 1;0 1 1; 0 2 1;0 3 1;0 4 1;%
    1 0 1;1 1 1; 1 2 1;1 3 1;1 4 1;
    2 0 1;2 1 1; 2 2 1;2 3 1;2 4 1;
    3 0 1;3 1 1; 3 2 1;3 3 1;3 4 1;
    4 0 1;4 1 1; 4 2 1;4 3 1;4 4 1;
    0 0 2;0 1 2; 0 2 2;0 3 2;0 4 2;%
    1 0 2;1 1 2; 1 2 2;1 3 2;1 4 2;
    2 0 2;2 1 2; 2 2 2;2 3 2;2 4 2;
    3 0 2;3 1 2; 3 2 2;3 3 2;3 4 2;
    4 0 2;4 1 2; 4 2 2;4 3 2;4 4 2;
    0 0 3;0 1 3; 0 2 3;0 3 3;0 4 3;%
    1 0 3;1 1 3; 1 2 3;1 3 3;1 4 3;
    2 0 3;2 1 3; 2 2 3;2 3 3;2 4 3;
    3 0 3;3 1 3; 3 2 3;3 3 3;3 4 3;
    4 0 3;4 1 3; 4 2 3;4 3 3;4 4 3;
    0 0 4;0 1 4; 0 2 4;0 3 4;0 4 4;%
    1 0 4;1 1 4; 1 2 4;1 3 4;1 4 4;
    2 0 4;2 1 4; 2 2 4;2 3 4;2 4 4;
    3 0 4;3 1 4; 3 2 4;3 3 4;3 4 4;
    4 0 4;4 1 4; 4 2 4;4 3 4;4 4 4;
  ];
A = A*t;


%% 


B = [ 
  0.5 0.5 0.5;0.5 1.5 0.5;0.5 2.5 0.5;0.5 3.5 0.5;% 体中心处原子
  1.5 0.5 0.5;1.5 1.5 0.5;1.5 2.5 0.5;1.5 3.5 0.5;
  2.5 0.5 0.5;2.5 1.5 0.5;2.5 2.5 0.5;2.5 3.5 0.5;
  3.5 0.5 0.5;3.5 1.5 0.5;3.5 2.5 0.5;3.5 3.5 0.5;
  0.5 0.5 1.5;0.5 1.5 1.5;0.5 2.5 1.5;0.5 3.5 1.5;%
  1.5 0.5 1.5;1.5 1.5 1.5;1.5 2.5 1.5;1.5 3.5 1.5;
  2.5 0.5 1.5;2.5 1.5 1.5;2.5 2.5 1.5;2.5 3.5 1.5;
  3.5 0.5 1.5;3.5 1.5 1.5;3.5 2.5 1.5;3.5 3.5 1.5;
  0.5 0.5 2.5;0.5 1.5 2.5;0.5 2.5 2.5;0.5 3.5 2.5;%
  1.5 0.5 2.5;1.5 1.5 2.5;1.5 2.5 2.5;1.5 3.5 2.5;
  2.5 0.5 2.5;2.5 1.5 2.5;2.5 2.5 2.5;2.5 3.5 2.5;
  3.5 0.5 2.5;3.5 1.5 2.5;3.5 2.5 2.5;3.5 3.5 2.5;
  0.5 0.5 3.5;0.5 1.5 3.5;0.5 2.5 3.5;0.5 3.5 3.5;%
  1.5 0.5 3.5;1.5 1.5 3.5;1.5 2.5 3.5;1.5 3.5 3.5;
  2.5 0.5 3.5;2.5 1.5 3.5;2.5 2.5 3.5;2.5 3.5 3.5;
  3.5 0.5 3.5;3.5 1.5 3.5;3.5 2.5 3.5;3.5 3.5 3.5;];
B = B*t;


%% 

p = t*[xx yy 4] +[0 0 2.5]; % 圆心
r = 4.2;   % 半径


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
fr = norm(f1);
    


end

