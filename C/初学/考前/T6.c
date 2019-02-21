/*编写用户自定义函数，产生n个介于0~9之间的随机整数，
并统计0,1,2,3,4,5,6,7,8,9各出现了多少次。
（随机数的库文件为stdlib.h， 时间库文件 time.h）
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void random(void)
{
    int i,a[100],p[10]={0,0};
   srand(time(0));
   for (i=0;i<100;i++)
   {
       a[i]=rand()%10;
       printf("%2d",a[i]);
       if((i+1)%10==0&&i>0) printf("\n");
       p[a[i]]+=1;
   }
   printf("\n");
   printf("The answer is:\n");
   for(i=0;i<10;i++)
   {
       printf("%7d",p[i]);
   }


}
void main()
{
    random();
}
