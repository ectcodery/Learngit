/*��д�û��Զ��庯��������n������0~9֮������������
��ͳ��0,1,2,3,4,5,6,7,8,9�������˶��ٴΡ�
��������Ŀ��ļ�Ϊstdlib.h�� ʱ����ļ� time.h��
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
