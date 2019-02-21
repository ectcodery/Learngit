%% 绘制频谱
L = 100
t = 0:L-1


figure(1)
z = tripuls(t-L*0.7/2,L*0.7);
x = [z  z z z z z z z z z z z z z z];
k = length(x)/ length(z)

plot(0: k*L-1, x);
% axis([-0.2 0.2 -0.2 1.2])
% title('频谱图')
title('对频谱进行周期重复')
%% 
y = ifft(x)
figure(2)
plot(0:k*L-1, y)
axis([0  15*k -0.3 0.5])
% title('时域图')
title('频谱重复后的时域图')
%% 时域
t;
x1 = ifft(z);
xq = 0: 0.4:L-1 ;
yq = spline( t, x1 ,xq); 
figure(5)
plot(t, x1, '*', xq, yq, 'r')
axis([0  20 -0.3 0.5])


%% 时域抽样

s = ones(1,length(yq));
for i = 2:length(yq)
    if mod(i ,10) == 0
         s(i) = 1;
    else 
        s(i) = 0;
    end
end

x11 = yq .* s
figure(3)
scatter(0:length(yq)-1, x11,'MarkerFaceColor','b')
axis([0  20 -0.15 0.5])
title('对时域信号进行抽样')



%% 
y1 = fft(x11);
figure(4)
plot(0:length(yq)-1, y1)
% axis([0  20*k -0.3 0.5])
title('时域信号抽样后的频谱')


