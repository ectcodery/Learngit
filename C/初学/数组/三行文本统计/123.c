
#include<stdio.h>
#include<string.h>
void main()


{
   char s[3][10];
   int i,j,a=0,b=0,c=0,d=0,e=0;
   for(i=0;i<3;i++)
	   gets(s[i]);
   for(i=0;i<3;i++)
	   for(j=0;j<10;j++)

{
           if(s[i][j]>=65&&s[i][j]<=90)
                 a+=1;
		   else if(s[i][j]>=97&&s[i][j]<=122)
			   b+=1;
		   else if(s[i][j]==' ')
			   c+=1;
		   else if(s[i][j]>=48&&s[i][j]<=57)
			   d+=1;
		   else e+=1;
		   printf("%4d",s[i][j]);/*δ��ֵ������Ԫ��ȡ���ֵ����a[9]!=\0(һ��)*/
		   if(j==9)
            printf("\n");
}
		   printf("��д��ĸ%d\nСд��ĸ%d\n�ո�%d\n����%d\n�����ַ�%d\n",a,b,c,d,e);



}
