ran_arr = unifrnd(0, 2*pi, 1, 3)

for k=1:3
t=1:0.1:10;
X=5*cos(t+ran_arr(k));
plot(t,X);
hold on
end

xlabel('t');ylabel('X(t)');
legend(strcat('��ȡֵΪ��', num2str(ran_arr(1))), ...
strcat('��ȡֵΪ��', num2str(ran_arr(2))), ...
strcat('��ȡֵΪ��', num2str(ran_arr(3)))); 

grid on;axis tight;
