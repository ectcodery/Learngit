#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define swap(a,b) t=a;a=b;b=t
void main()
{
   char t;
   int m,n,i;
   char s[50],str[50];
   scanf("%s",s);
   scanf("%s",str);
   m=strlen(s);
   n=strlen(str);
   for(i=0;i<((m>n?m:n)+1);i++)
   {
       swap(s[i],str[i]);
   }
    printf("%s\n",s);
    printf("%s",str);

}
