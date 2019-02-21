b = xlsread('GDP.xlsx','sheet2', 'B2:r21');
b = b(1:20, :);
x = b(:,end);
ypre = b(:,end-3);
yjiao = b(:,end-2);
yjiao1 = yjiao./ypre;
yzhi = b(:,end-1);
yzhi1 = yzhi./ypre;
yk = b(:,end-7);
yl = b(:,end-6);
ym = b(:,end-5);
yh = b(:,7);
yg = b( :, 6);
a = [yg,yh,yk,yl,ym] ;
v = a';     
yv = yjiao1';   
P = v(:, 1:17); [PN,PS1] = mapminmax(P);
T = yv(:,1:17) ; [TN,PS2] = mapminmax(T);
net1 = newrb(PN,TN);
for i=1:20
    disp(i) 
    disp('--------------------------------------------------')
    test = v(:,i) ; testn = mapminmax('apply' , test, PS1);
    yn1 = sim(net1,testn); y1 = mapminmax('reverse',yn1,PS2);
    delta1 = abs(yv(i)-y1)/yv(i)
end

