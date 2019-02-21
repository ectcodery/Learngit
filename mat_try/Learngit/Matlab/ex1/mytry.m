x=  -5:5;
y = -10:10;
A = zeros(11,21);
for i = x
    for j = y
        A(i+6,j+11) = i+ 2*j;
    end
end
surf(x, y, A')
xlabel('x'); ylabel('y');

        