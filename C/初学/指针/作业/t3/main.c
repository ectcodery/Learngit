#include<stdio.h>
#include<string.h>
void main()


{
   char s[100];
   int i,a=0,b=0,c=0,d=0,e=0;
   gets(s);
   for(i=0;i<strlen(s);i++)
{
    if(s[i]>=65&&s[i]<=90)
        a+=1;
    else if(s[i]>=97&&s[i]<=122)
        b+=1;
    else if(s[i]==' ')
        c+=1;
    else if(s[i]>=48&&s[i]<=57)
        d+=1;
    else e+=1;
}
    printf("��д��ĸ%d\nСд��ĸ%d\n�ո�%d\n����%d\n�����ַ�%d\n",a,b,c,d,e);



}

