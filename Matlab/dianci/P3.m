t=0:0.01:10; 

%定义一个数组t，步长为0.01，范围是0到5，意义是时间域变量

z = 8

%定义一个数组z，步长为0.1，范围是0到40，意义是空间域变量

omiga=3/4*pi;

%omiga是角频率

beta=0.7;

% ?ta是传播常数

tao=1;

%tao是反射系数，取值0，则无反射为行波，取值1，则全反射为驻波

%tao取0到1之间的值，为行驻波

y=real(exp(1i*(omiga*t+beta*z))+tao*exp(1i*(omiga*t-beta*z)));

% real（）函数，取实数部分

% exp（）函数，对数
% 
% 如何使用MATLAB画出动态的行驻波波形

plot(t,y)

%画出当前驻波波形


%将纵轴限制在-2到2的范围，不然会不停的自适应调整，造成抖动

