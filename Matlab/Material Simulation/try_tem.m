%%  try plot
A = [ 3 3 3 ;3 4 5];
x=A(:,1);y=A(:,2);z=A(:,3);
scatter3(x,y,z,'kD')%É¢µãÍ¼

%%  test the V function
xi=1.4 : 0.01 :4.3;
[p,f] = V(xi);
f

a = xlsread('data.xlsx','sheet1', 'a2:d28');
b = xlsread('data.xlsx','sheet1', 'h2:j9');
x = a(:,1);
ff = a(:,2);
y = a(:,4);
m = b(:,1);
n = b(:,3);

plot(xi,f,'b',x,ff,'r')



%% bcc Vmin
f1 = [];
t1 = [];
v1 = [];
for t = 2.9 :0.01 :4.85
    t1 = [t1;t]; 
    [f,dt] = bccnoa(t);
    f1 = [f1;f];
    v = 0;
    for i = 1:length(dt)
        if(dt(i)>0)
            v  = v + V(dt(i));
        end
    end
    v1 = [v1;v];
    
end
figure(1)
plot(t1,f1)
figure(2)
plot(t1,v1)

%% fcc  Vmin
f1 = [];
t1 = [];
v1 = [];
for t = 3.5 :0.01 :6
    t1 = [t1;t]; 
    [f,dt] = fccnoa(t);
    dt
    f1 = [f1;f];
    v = 0;
    for i = 1:length(dt)
        if(dt(i)>0)
            v  = v + V(dt(i));
            V(dt(i))
        end
    end
    v1 = [v1;v];
    
end
figure(1)
plot(t1,f1)
figure(2)
plot(t1,v1)

%% q4 picture
x=1:0.1:2;
y=1:0.1:2;
[X,Y]=meshgrid(x,y);
f = [];
for i = 1:11
    for j = 1:11
        f(j,i) = fff(x(i),y(j));
    end
end

surf(X*2.855,Y*2.855,f)
xlabel('x');ylabel('y');zlabel('z'); 



    