#include <stdio.h>
#include <stdlib.h>

void main()
{
    int max,min,c=1,a,b,d,e;
   printf("请输入两个正整数：");
   scanf("%d%d",&max,&min);
   a=max;b=min;
   if((max<=0)||(min<=0)) printf("输入有误");

   for(;c!=0;)
   {
       if(max>=min)
       {
           c=max%min;
           max=c;

       }
       else
       {
           c=min%max;
           min=c;
       }
   }
   if(max==0) printf ("最大公约数为：%d",min);
   else printf ("最大公约数为:%d",max);

   e=a>b?a:b;
   d=1;
   for(;d!=0;e++)
    d=(e%a)||(e%b);
   printf("最小公倍数为：%d",e-1);

   getch();



}
