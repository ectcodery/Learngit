% x=-3:.1:3;
% y=-3:.1:3;
% [xx,yy]=meshgrid(x,y);
% zz=3*xx.^2+ yy.^2;
% 
% surf(xx,yy,zz)
% xlabel('x')

t=0:0.01:5; 

%定义一个数组t，步长为0.01，范围是0到5，意义是时间域变量

z=0:0.1:40;

%定义一个数组z，步长为0.1，范围是0到40，意义是空间域变量

omiga=3/4*pi;

%omiga是角频率

beta=1;

tao=0.7;

%tao是反射系数，取值0，则无反射为行波，取值1，则全反射为驻波

%tao取0到1之间的值，为行驻波

for m=1:length(t)

%这里不使用i改为m，因为i在MATLAB里面默认是虚数单位

y=real(exp(1i*(omiga*t(m)-beta*z))+tao*exp(1i*(omiga*t(m)+beta*z)));
y1=real(exp(1i*(omiga*t(m)-beta*z)));
y2=real(tao*exp(1i*(omiga*t(m)+beta*z)));

% real（）函数，取实数部分

% exp（）函数，对数


plot(z,y1,'b',z,y2,'r',z, y,'k')

%画出当前驻波波形

ylim([-2 2])

%将纵轴限制在-2到2的范围，不然会不停的自适应调整，造成抖动

pause(0.01);

%每次画完图，停留0.01秒，开始下一次的更新循环

%循环更新与暂停语句是进行动态显示的关键

% pause（x）函数中的x代表的是停留的秒数，是MATLAB的真实时间

end