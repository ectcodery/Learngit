#include <stdio.h>
#include <stdlib.h>

void main()
{
    int max,min,c=1,a,b,d,e;
   printf("������������������");
   scanf("%d%d",&max,&min);
   a=max;b=min;
   if((max<=0)||(min<=0)) printf("��������");

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
   if(max==0) printf ("���Լ��Ϊ��%d",min);
   else printf ("���Լ��Ϊ:%d",max);

   e=a>b?a:b;
   d=1;
   for(;d!=0;e++)
    d=(e%a)||(e%b);
   printf("��С������Ϊ��%d",e-1);

   getch();



}
