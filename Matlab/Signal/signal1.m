%% ԭʼ��Ƶ����Ҷ����
[x,Fs] = audioread('357.wav');      %��wav�ļ�ת���ɱ�����fsΪ������   
sound(x,Fs);
N=length(x);
y=fft(x,N);
figure(1);
subplot(2,1,1); plot(x); title('ԭʼ�ź�ʱ��ͼ');       % ԭʼ��Ƶʱ��ͼ  
subplot(2,1,2); plot(abs(y)); title('ԭʼ�ź�Ƶ��ͼ');  % ԭʼ��ƵƵ�׷���
hold on;
%% ���봦��
si = x+0.01*randn(N,2);           %���������
figure(2);
subplot(2,1,1);
plot(si);
title('ԭʼ��Ƶ�źż���ʱ����');
sound(si,Fs);
s=fft(si);
subplot(2,1,2);
plot(abs(s));
title('ԭʼ��Ƶ�źż���Ƶ�����');
%% �ô�����������˲���
fp=700; fs=800; rs=40;    %�˲������ָ��
wp=2*pi*fp/Fs;           
ws=2*pi*fs/Fs;
Bt=ws-wp;                 %�����ͨ�˲�����ֹƵ��
alph=0.5842*(rs-21)^0.4+0.07886*(rs-21);
M=ceil((rs-8)/2.285/Bt);
wc=(wp+ws)/2/pi;
hn=fir1(M,wc,kaiser(M+1,alph));
freqz(hn);
figure(3);
subplot(2,2,1); plot(si); title ('�˲�ǰ�źŵĲ���'); 
subplot(2,2,2); plot(abs(s)); title ('�˲�ǰ�źŵ�Ƶ��'); 
z=fftfilt(hn,si);
Z=fft(z,N);
subplot(2,2,3); plot(z, 'b'); title('FIR�˲����źŵĲ���'); 
subplot(2,2,4); plot(abs(Z), 'b'); title ('FIR�˲����źŵ�Ƶ��');
sound(z,Fs);