%%load the data
b = xlsread('GDP.xlsx','sheet2', 'B2:r21')
b = b(6:end, :)
x = b(:,end)
yjiao = b(:,end-2)
yzhi = b(:,end-1)
yk = b(:,end-7)
yl = b(:,end-6)
ym = b(:,end-5)
yn = b(:,end-4)
%%   plot the image
xq = min(x): 0.1 :max(x);
yqjiao = spline( x, yjiao ,xq); 
plot( x, yjiao, '*', xq, yqjiao, 'r') ; 
hold on
xq = min(x): 0.1 :max(x);
yqzhi = spline( x, yzhi ,xq); 
plot( x, yzhi, '.', xq, yqzhi, 'b') ; 
%% 是否正相关
subplot(3,2,1)
plot(x,yjiao)
subplot(3,2,2)
plot(x,yzhi)
subplot(3,2,3)
plot(x,yk)
subplot(3,2,4)
plot(x,yl)
subplot(3,2,5)
plot(x,ym)
subplot(3,2,6)
plot(x,yn)