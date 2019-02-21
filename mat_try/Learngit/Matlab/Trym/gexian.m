function [root,res]=gexian(f,a,b,eps)
%what
    if(nargin==3)
        eps=1.0e-8;
    end
    f1=subs(sym(f),findsym(sym(f)),a);
    f2=subs(sym(f),findsym(sym(f)),b);
    if(f1==0)
        root=a;
    end
    if(f2==0)
        root=b;
        endif(f1*f2>0)
        disp('两端点函数值乘积大于0!');
        return;
    else
        tol=1;
        fa=subs(sym(f),findsym(sym(f)),a);
        fb=subs(sym(f),findsym(sym(f)),b);
        root=a-(b-a)*fa/(fb-fa);
        root = double(root);
        i = 1;
        res = zeros(20,1);
    while(tol>eps)
        r1=root;
        res(i) = root;
        i = i+1;
        fx=subs(sym(f),findsym(sym(f)),r1);
        s=fx*fa;

        if(s==0)
        root=r1;
        else
            if(s>0)
            root=b-(r1-b)*fb/(fx-fb);
            root = double(root);
            else
            root=a-(r1-a)*fa/(fx-fa);
            root = double(root);
            end
        end

        tol=abs(root-r1);
    end
   
end