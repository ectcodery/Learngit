f = '3*x-sin(x)-cos(x)';
[r1,res1] = gexian(f,0.3,0.7);
[r2,res2] = paowuxian(f,0.3,0.7,0.5);
k = [1:20]';
res = [k,res1,res2]
