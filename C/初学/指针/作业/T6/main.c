#include <stdio.h>
#include <stdlib.h>

void main()
{
   char s1[20],s2[20],*p1,*p2;
   int a;
   p1=s1;
   p2=s2;
   scanf("%s",p1);
   scanf("%s",p2);
   int astrcmp(char*,char *);
   a=astrcmp(s1,s2);
   printf("%d",a);

}

int astrcmp(char *p1,char *p2)
{
    int i;
    for(i=0;*(p1+i)==*(p2+i);i++)
    {
        if(*(p1+i)==0) return 0;
    }
    return((*(p1+i))-(*(p2+i)));
}
