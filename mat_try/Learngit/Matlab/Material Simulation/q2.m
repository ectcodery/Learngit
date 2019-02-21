a = xlsread('data.xlsx','sheet1', 'a2:d28');
b = xlsread('data.xlsx','sheet1', 'h2:j9');
x = a(:,1);
y = a(:,4);
m = b(:,1);
n = b(:,3);

syms r;
f=fittype('p1*(2.2/r)^e1+p2*(2.2/r)^e2-(r/4)^8-p3*(2.2/r)^6','independent','r','coefficients',{'p1','p2','p3','e1','e2'});
cfun=fit(x,y,f) %��ʾ��Ϻ��������ݱ���Ϊ��������ʽ
xi=1.45:0.01:4.15;
yi=cfun(xi);
plot(x,y,'r*');

title('��Ϻ���ͼ��');