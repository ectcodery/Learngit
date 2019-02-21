#include <stdio.h>
#include<math.h>


void main()
{
   float s[50],ave, w,ww,ch,xb,x,rate,t;
   int i,n;


   printf("几个数据？");
   scanf("%d",&n);
   for(i=0;i<n;i++)
     scanf("%f",&s[i]);
   for(i=0;i<n;i++)
   {

       ch=ch+s[i];
   }
   ave=ch/n;
   printf("平均值为%.4f\n",ave);
   for(ch=0,w=0,ww=0,i=0;i<n;i++)
   {
       ch=(ave-s[i])*(ave-s[i]);
       ww=ww+ch;
   }
    ww=sqrt(ww/(n-1));
    if(n==2) t=1.84;
    if(n==3) t=1.32;
    if(n==4) t=1.20;
    if(n==5) t=1.14;
    if(n>=6) t=1;
    ww=ww*t;
    printf("标准偏差σ为：%.5f,修正因子为:%.3f",ww,t);
    printf("\n3σ为:%.5f",3*ww);
    printf("\n坏值为：");
    for(i=0,ch=0;i<n;i++)
    {
        ch=fabs(s[i]-ave);
        if(ch>3*ww)
           {

               printf("坏值为第%d个数据：%.4f\n",i+1,s[i]);
           }

    }
    w=ww/(sqrt(n));
    printf("\nA类不确定度为：%.5f",w);

    printf("\n请输入仪器不确定度：");
    scanf("%f",&xb);
    xb=xb/(sqrt(3));
    printf("\nB类不确定度为：%.5f",xb);
    x=sqrt(w*w+xb*xb);
    printf("\n不确定度为:%.5f",x);
    rate=x/ave;
    printf("\n相对误差为:%f",rate);

    getch();



}
