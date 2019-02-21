z=12
xx=11;yy=11;vector=ones(yy,xx);
vector(yy,:)=ones(1,xx)*z;
vector(1,:)=zeros(1,xx);
for i=1:yy
    vector(i,1)=0
    vector(i,xx)=0;
    alpha=1
end
v2=vector;ma=1;t=0;
n=0
while(ma>n-5)
    n=n+1
    ma=0
    for i=2:yy-1
        for j=2:xx-1
            v2(i,j)=vector(i,j)+alpha/4*(vector(i+1,j)+vector(i,j+1)+v2(i-1,j)+v2(i,j-1)-4*vector(i,j));
            if(t>ma) ma=t;
            end
        end
    end
    vector=v2;
end
v2=flipud(vector)
clf
figure(1)
mesh(v2)
axis([0,12,0,12,0,10.75])