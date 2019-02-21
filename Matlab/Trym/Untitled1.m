syms x y
y = x^2
c = 1:5
res = subs(y, x, c)
plot(c,res)
r = double(res)
