function [root,res]=paowuxian(f,a,b,x,eps)
%抛物线法求函数 f在区间【a，b】上的一个零点
%函数名：f
%区间左端点：  a
%区间右端点：b
%初始迭代点：x
%根的精度：eps
%求出的函数零点：root

    if(nargin==4)
        eps=1.0e-8;
    end

    f1=subs(sym(f),findsym(sym(f)),a);
    f2=subs(sym(f),findsym(sym(f)),b);

    if(f1==0)
        root=a;
    end

    if(f2==0)
        root=b;
    end

    if(f1*f2>0)
        disp('两端点函数值乘积大于0!');
    return;
    else
    tol=1;
    fa=subs(sym(f),findsym(sym(f)),a);
    fb=subs(sym(f),findsym(sym(f)),a);
    fx=subs(sym(f),findsym(sym(f)),x);
    d1=(fb-fa)/(b-a);
    d2=(fx-fb)/(x-b);
    d3=(f2-f1)/(x-a);
    B=d2+d3*(x-b);
    root=x-2*fx/(B+sign(B)*sqrt(B^2-4*fx*d3));
    root = double(root);
    t=zeros(3,1);
    t(1)=a;
    t(2)=b; 
    t(3)=x;
    res = zeros(20,1);
    i = 1;
    while(tol>eps)
        t(1)=t(2);                                                %保存3个点
        t(2)=t(3);
        t(3)=root;
        res(i) = root;
        i = i+1;
        f1=subs(sym(f),findsym(sym(f)),t(1));             %计算3个点的函数值
        f2=subs(sym(f),findsym(sym(f)),t(2));
        f3=subs(sym(f),findsym(sym(f)),t(3));
        d1=(f2-f1)/(t(2)-t(1));                                %计算3个差分
        d2=(f3-f2)/(t(3)-t(2));
        d3=(d2-d1)/(t(3)-t(1));
        B=d2+d3*(t(3)-t(2));                                  %计算算法中的B
        root=t(3)-2*f3/(B+sign(B)*sqrt(B^2-4*f3*d3));
        root = double(root);
        tol=abs(root-t(3));
    end
end
