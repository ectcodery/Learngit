b = xlsread('GDP.xlsx','sheet2', 'B2:u21');
b = b(1:8, :);
x = b(:,17);
ypre = b(:,20);
yjiao = b(:,15);
yjiao = yjiao./ypre;
yzhi = b(:,16);
yzhi = yzhi./ypre;
yk = b(:,10);
yi = b(:,8);
yl = b(:,11);
yj = b(:,9);
ym = b(:,12);

yh = b(:,7);

yg = b( :, 6);


%% LR
disp('jianmo__________________________________________________________________________________________')
X = [ones(length(yzhi), 1),yk.^0.5,yg];
[b1,bint1,r1,rint1,stats1]=regress(yjiao,X);
b1
y1 = X*b1;
y1
y11 = y1.*ypre
s = (y1-yjiao).*ypre./(yjiao.*ypre)
mean(abs(s))
mean(s)

%% 


disp('quan ceshi____________________huadbei____________________________________________________________')
b = xlsread('GDP.xlsx','sheet7', 'B2:u21');
b = b(14:20, :);
x = b(:,17);
ypre = b(:,20);
yjiao = b(:,15);
yjiao = yjiao./ypre;
yzhi = b(:,16);
yzhi = yzhi./ypre;
yk = b(:,10);
yl = b(:,11);
ym = b(:,12);
yh = b(:,7);
yg = b( :, 6);
yi = b(:,8);
yj = b(:,9);

X = [ones(length(yzhi), 1),yk.^0.5,yg];
y1 = X*b1;
y11 = y1.*ypre
s = (y1-yjiao).*ypre./(yjiao.*ypre)
mean(abs(s))
mean(s)

plot(x,yjiao.*ypre,'r',x,y1.*ypre,'b')


%% 
disp('quan ceshi___________________ shannxi____________________________________________________________')
b = xlsread('GDP.xlsx','sheet4', 'B2:u12');
ypre = b(:,20);
ym = b(:,12);
yh = b(:,7);
yk = b(:,10);
yg = b( :, 6);
X = [ones(length(ym), 1),yk.^0.5,yg];
y1 = X*b1;
y11 = y1.*ypre

