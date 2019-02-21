% b = xlsread('GDP.xlsx','sheet2', 'B2:r21');
% bo = b(:,end-3);
% bp = b(:,end-2);
% bq = b(:,end-1);
% 
% bo1 = bo*116410/1375270
% c = (bo1-bp)./bp
% mean(abs(c))
% mean(c)
% 
% disp('---------------------------------------------------')
% bo2 = bo*91884/1375270
% d = (bo2-bq)./bq
% mean(abs(d))
% mean(d)

b = xlsread('GDP.xlsx','sheet4', 'B2:u21');
ypre = b(:,20);
ym = b(:,12);
yh = b(:,7);
yk = b(:,10);
yg = b( :, 6);
X = [ones(length(ym), 1),ym,yh,yk,yg];
y1 = X*b1;
y11 = y1.*ypre
