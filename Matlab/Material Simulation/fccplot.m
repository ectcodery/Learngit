t = 5;% ��������
A = [0 0 0;0 1 0; 0 2 0;0 3 0;0 4 0;% ��Ǵ�ԭ��
    1 0 0;1 1 0; 1 2 0;1 3 0;1 4 0;
    2 0 0;2 1 0; 2 2 0;2 3 0;2 4 0;
    3 0 0;3 1 0; 3 2 0;3 3 0;3 4 0;
    4 0 0;4 1 0; 4 2 0;4 3 0;4 4 0;
    0 0 1;0 1 1; 0 2 1;0 3 1;0 4 1;
    1 0 1;1 1 1; 1 2 1;1 3 1;1 4 1;
    2 0 1;2 1 1; 2 2 1;2 3 1;2 4 1;
    3 0 1;3 1 1; 3 2 1;3 3 1;3 4 1;
    4 0 1;4 1 1; 4 2 1;4 3 1;4 4 1;
    0 0 2;0 1 2; 0 2 2;0 3 2;0 4 2;
    1 0 2;1 1 2; 1 2 2;1 3 2;1 4 2;
    2 0 2;2 1 2; 2 2 2;2 3 2;2 4 2;
    3 0 2;3 1 2; 3 2 2;3 3 2;3 4 2;
    4 0 2;4 1 2; 4 2 2;4 3 2;4 4 2;
    0 0 3;0 1 3; 0 2 3;0 3 3;0 4 3;
    1 0 3;1 1 3; 1 2 3;1 3 3;1 4 3;
    2 0 3;2 1 3; 2 2 3;2 3 3;2 4 3;
    3 0 3;3 1 3; 3 2 3;3 3 3;3 4 3;
    4 0 3;4 1 3; 4 2 3;4 3 3;4 4 3;
    0 0 4;0 1 4; 0 2 4;0 3 4;0 4 4;
    1 0 4;1 1 4; 1 2 4;1 3 4;1 4 4;
    2 0 4;2 1 4; 2 2 4;2 3 4;2 4 4;
    3 0 4;3 1 4; 3 2 4;3 3 4;3 4 4;
    4 0 4;4 1 4; 4 2 4;4 3 4;4 4 4;
  ];
A = A*t;

x1=A(:,1);y1=A(:,2);z1=A(:,3);
scatter3(x1,y1,z1,'k','MarkerFaceColor','k')% ��Ǵ�ԭ��ɢ��ͼ

%% 

B = [ 0.5 0.5 0;0.5 1.5 0;0.5 2.5 0;0.5 3.5 0;% 1�����Ĵ�ԭ��
      1.5 0.5 0;1.5 1.5 0;1.5 2.5 0;1.5 3.5 0;
      2.5 0.5 0;2.5 1.5 0;2.5 2.5 0;2.5 3.5 0;
      3.5 0.5 0;3.5 1.5 0;3.5 2.5 0;3.5 3.5 0;
      0.5 0.5 1;0.5 1.5 1;0.5 2.5 1;0.5 3.5 1;% 1�����Ĵ�ԭ��
      1.5 0.5 1;1.5 1.5 1;1.5 2.5 1;1.5 3.5 1;
      2.5 0.5 1;2.5 1.5 1;2.5 2.5 1;2.5 3.5 1;
      3.5 0.5 1;3.5 1.5 1;3.5 2.5 1;3.5 3.5 1;
      0.5 0.5 2;0.5 1.5 2;0.5 2.5 2;0.5 3.5 2;% 1�����Ĵ�ԭ��
      1.5 0.5 2;1.5 1.5 2;1.5 2.5 2;1.5 3.5 2;
      2.5 0.5 2;2.5 1.5 2;2.5 2.5 2;2.5 3.5 2;
      3.5 0.5 2;3.5 1.5 2;3.5 2.5 2;3.5 3.5 2;
      0.5 0.5 3;0.5 1.5 3;0.5 2.5 3;0.5 3.5 3;% 1�����Ĵ�ԭ��
      1.5 0.5 3;1.5 1.5 3;1.5 2.5 3;1.5 3.5 3;
      2.5 0.5 3;2.5 1.5 3;2.5 2.5 3;2.5 3.5 3;
      3.5 0.5 3;3.5 1.5 3;3.5 2.5 3;3.5 3.5 3;
      0.5 0.5 4;0.5 1.5 4;0.5 2.5 4;0.5 3.5 4;% 1�����Ĵ�ԭ��
      1.5 0.5 4;1.5 1.5 4;1.5 2.5 4;1.5 3.5 4;
      2.5 0.5 4;2.5 1.5 4;2.5 2.5 4;2.5 3.5 4;
      3.5 0.5 4;3.5 1.5 4;3.5 2.5 4;3.5 3.5 4;
      
      0 0.5 0.5;0 1.5 0.5;0 2.5 0.5;0 3.5 0.5;% 2�����Ĵ�ԭ��
      0 0.5 1.5;0 1.5 1.5;0 2.5 1.5;0 3.5 1.5;
      0 0.5 2.5;0 1.5 2.5;0 2.5 2.5;0 3.5 2.5;
      0 0.5 3.5;0 1.5 3.5;0 2.5 3.5;0 3.5 3.5;
      1 0.5 0.5;1 1.5 0.5;1 2.5 0.5;1 3.5 0.5;% 2�����Ĵ�ԭ��
      1 0.5 1.5;1 1.5 1.5;1 2.5 1.5;1 3.5 1.5;
      1 0.5 2.5;1 1.5 2.5;1 2.5 2.5;1 3.5 2.5;
      1 0.5 3.5;1 1.5 3.5;1 2.5 3.5;1 3.5 3.5;
      2 0.5 0.5;2 1.5 0.5;2 2.5 0.5;2 3.5 0.5;% 2�����Ĵ�ԭ��
      2 0.5 1.5;2 1.5 1.5;2 2.5 1.5;2 3.5 1.5;
      2 0.5 2.5;2 1.5 2.5;2 2.5 2.5;2 3.5 2.5;
      2 0.5 3.5;2 1.5 3.5;2 2.5 3.5;2 3.5 3.5; 
      3 0.5 0.5;3 1.5 0.5;3 2.5 0.5;3 3.5 0.5;% 2�����Ĵ�ԭ��
      3 0.5 1.5;3 1.5 1.5;3 2.5 1.5;3 3.5 1.5;
      3 0.5 2.5;3 1.5 2.5;3 2.5 2.5;3 3.5 2.5;
      3 0.5 3.5;3 1.5 3.5;3 2.5 3.5;3 3.5 3.5;
      4 0.5 0.5;4 1.5 0.5;4 2.5 0.5;4 3.5 0.5;% 2�����Ĵ�ԭ��
      4 0.5 1.5;4 1.5 1.5;4 2.5 1.5;4 3.5 1.5;
      4 0.5 2.5;4 1.5 2.5;4 2.5 2.5;4 3.5 2.5;
      4 0.5 3.5;4 1.5 3.5;4 2.5 3.5;4 3.5 3.5;
     
      0.5 0 0.5;0.5 0 1.5;0.5 0 2.5;0.5 0 3.5;% 3�����Ĵ�ԭ��
      1.5 0 0.5;1.5 0 1.5;1.5 0 2.5;1.5 0 3.5;
      2.5 0 0.5;2.5 0 1.5;2.5 0 2.5;2.5 0 3.5;
      3.5 0 0.5;3.5 0 1.5;3.5 0 2.5;3.5 0 3.5;
      0.5 1 0.5;0.5 1 1.5;0.5 1 2.5;0.5 1 3.5;% 3�����Ĵ�ԭ��
      1.5 1 0.5;1.5 1 1.5;1.5 1 2.5;1.5 1 3.5;
      2.5 1 0.5;2.5 1 1.5;2.5 1 2.5;2.5 1 3.5;
      3.5 1 0.5;3.5 1 1.5;3.5 1 2.5;3.5 1 3.5;
      0.5 2 0.5;0.5 2 1.5;0.5 2 2.5;0.5 2 3.5;% 3�����Ĵ�ԭ��
      1.5 2 0.5;1.5 2 1.5;1.5 2 2.5;1.5 2 3.5;
      2.5 2 0.5;2.5 2 1.5;2.5 2 2.5;2.5 2 3.5;
      3.5 2 0.5;3.5 2 1.5;3.5 2 2.5;3.5 2 3.5;
      0.5 3 0.5;0.5 3 1.5;0.5 3 2.5;0.5 3 3.5;% 3�����Ĵ�ԭ��
      1.5 3 0.5;1.5 3 1.5;1.5 3 2.5;1.5 3 3.5;
      2.5 3 0.5;2.5 3 1.5;2.5 3 2.5;2.5 3 3.5;
      3.5 3 0.5;3.5 3 1.5;3.5 3 2.5;3.5 3 3.5;
      0.5 4 0.5;0.5 4 1.5;0.5 4 2.5;0.5 4 3.5;% 3�����Ĵ�ԭ��
      1.5 4 0.5;1.5 4 1.5;1.5 4 2.5;1.5 4 3.5;
      2.5 4 0.5;2.5 4 1.5;2.5 4 2.5;2.5 4 3.5;
      3.5 4 0.5;3.5 4 1.5;3.5 4 2.5;3.5 4 3.5;
      ];
B = B*t;

hold on 
x2=B(:,1);y2=B(:,2);z2=B(:,3);
scatter3(x2,y2,z2,'bH')% �����Ĵ�ԭ��ɢ��ͼ
%% 


p = t*[2 2 2]; % Բ��
r = 4.2;   % �뾶
scatter3(p(1),p(2),p(3),'yS','MarkerFaceColor','k')%Բ�ĵ�
[x3,y3,z3]=sphere(30);%30�ǻ�����������ľ�γ������...30�Ļ�����30������, 30��γ��
x3=p(1)+r*x3;           % Բ��:(4,2,0)   �뾶:7
y3=p(2)+r*y3;
z3=p(3)+r*z3;
surf(x3,y3,z3)
xlabel('x')
ylabel('y')
zlabel('z')
axis equal
alpha(0.7)         %����͸����
shading flat       %ȥ����Щ��

%% 

Ai = length(A);
Bi = length(B);
A1 = [];
B1 = [];
dt = [];
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
As =  size(A1)
Bs = size(B1)
 
if(length(A1)>0)
    x3=A1(:,1);y3=A1(:,2);z3=A1(:,3);
    scatter3(x3,y3,z3,'rD','MarkerFaceColor','r')% ��Ǵ�ԭ��ɢ��ͼ
end

if(length(B1)>0)
    x4=B1(:,1);y4=B1(:,2);z4=B1(:,3);
    scatter3(x4,y4,z4,'rD','MarkerFaceColor','r')% �����Ĵ�ԭ��ɢ��ͼ
end
 
str = ['����' num2str(As(1)+Bs(1)) '��ԭ���ڽضϾ�����'];
disp(str)



