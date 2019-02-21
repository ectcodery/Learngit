fs = 200;
Ts = 1/fs;
t = (0:499)*Ts;
L = length(t)%时间，横坐标
% x=1/4/pi*sinc(1/pi*0.25*t).^2;    %三角波，加了噪声信号
x=1.5*sin(2*pi*2*t)
figure(1)
subplot(2,1,1);
plot(t,x);
xlabel('采样点');
ylabel('幅值');

y=fft(x,1024);

f = fs*(0:(L/2))/L;
subplot(2,1,2);
y2 = abs(y/L);
y1 = y2(1:L/2+1);
y1(2:end-1) = 2*y1(2:end-1);

plot(f,y1 );
xlabel('频率');
ylabel('幅值');
% axis([0 1 0 0.1])

