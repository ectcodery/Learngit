#include <stdio.h>
#include <stdlib.h>

void main()
{
   struct ques
   {
       int year;
       int month;
       int day;
       int dom1[12];
       int dom2[12];
   }*p,q={0,0,0,{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
   /*0不能少，数组只能在定义时一次性初始化；
        int a[20];
        a={1,2,3}   是不对的，因为a只是常量，不能对其赋值
   */
   printf("Input year,month and day:");
   scanf("%d",&q.year);
   scanf("%d",&q.month);
   scanf("%d",&q.day);
   int i,sign,d;
   sign=(q.year%4==0)&&(q.year%100!=0)||(q.year%400==0);
   for(i=0,d=0;i<q.month-1;i++)
   {
       if(sign==1)
        d+=q.dom2[i];
       else d+=q.dom1[i];
   }
   d+=q.day;
   printf("The answer is:%d",d);
}
