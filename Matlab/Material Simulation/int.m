a = xlsread('data.xlsx','sheet1', 'a2:c28');
b = zeros(27,1);
b(27) = -0.72219*0.1*0.5
for i = 26:-1:1
    b(i) = b(i+1)+0.025*(a(i,2)+a(i+1,2));
end

    
    
xx = xlsread('data.xlsx','sheet1', 'h2:j9');
x = xx(:,1);
y = xx(:,3);

a(:,1);
b

plot(x,y,'r*',a(:,1),b,'b-');
    