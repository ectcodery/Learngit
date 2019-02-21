%% 原始音频傅里叶分析
[x,Fs] = audioread('357.wav');      %将wav文件转换成变量，fs为采样率   
sound(x,Fs);
N=length(x);
y=fft(x,N);
figure(1);
subplot(2,1,1); plot(x); title('原始信号时域图');       % 原始音频时域图  
subplot(2,1,2); plot(abs(y)); title('原始信号频谱图');  % 原始音频频谱分析
hold on;
%% 加噪处理
si = x+0.01*randn(N,2);           %加随机噪声
figure(2);
subplot(2,1,1);
plot(si);
title('原始音频信号加噪时域波形');
sound(si,Fs);
s=fft(si);
subplot(2,1,2);
plot(abs(s));
title('原始音频信号加噪频域分析');
%% 用窗函数法设计滤波器
fp=700; fs=800; rs=40;    %滤波器设计指标
wp=2*pi*fp/Fs;           
ws=2*pi*fs/Fs;
Bt=ws-wp;                 %理想低通滤波器截止频率
alph=0.5842*(rs-21)^0.4+0.07886*(rs-21);
M=ceil((rs-8)/2.285/Bt);
wc=(wp+ws)/2/pi;
hn=fir1(M,wc,kaiser(M+1,alph));
freqz(hn);
figure(3);
subplot(2,2,1); plot(si); title ('滤波前信号的波形'); 
subplot(2,2,2); plot(abs(s)); title ('滤波前信号的频谱'); 
z=fftfilt(hn,si);
Z=fft(z,N);
subplot(2,2,3); plot(z, 'b'); title('FIR滤波后信号的波形'); 
subplot(2,2,4); plot(abs(Z), 'b'); title ('FIR滤波后信号的频谱');
sound(z,Fs);