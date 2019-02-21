a = xlsread('data.xlsx','sheet1', 'h2:j9');
x = a(:,1);
y = a(:,3);
%% 

syms r
f=fittype('4*p*((q./r).^12-(q./r).^6)','independent','r','coefficients',{'p','q'});
cfun=fit(x,y,f,'start',[1,2]) %��ʾ��Ϻ��������ݱ���Ϊ��������ʽ
xi=1.4:0.01:4.0;
yi=cfun(xi);
plot(x,y,'r*',xi,yi,'b-');
title('��Ϻ���ͼ��');