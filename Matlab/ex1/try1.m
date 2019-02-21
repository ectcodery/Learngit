%%load the data
b = xlsread('GDP.xlsx','sheet2', 'B2:D21')
b = b(6:end, :)
x = b(:,3)
yjiao = b(:,1)
yzhi = b(:,2)
%%   plot the image
xq = min(x): 0.1 :max(x);
yqjiao = spline( x, yjiao ,xq); 
plot( x, yjiao, '*', xq, yqjiao, 'r') ; 
hold on
xq = min(x): 0.1 :max(x);
yqzhi = spline( x, yzhi ,xq); 
plot( x, yzhi, '.', xq, yqzhi, 'b') ; 