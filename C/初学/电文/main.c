#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void  main()
{
   char s[100],str[100];
   int i,n;
   gets(s);
   strcpy(str,s);
   n=strlen(s);
   for(i=0;i<n;i++)
     {if(s[i]>=65&&s[i]<=90) s[i]=155-s[i];
     if(s[i]>=97&&s[i]<=122) s[i]=219-s[i];
     }
     printf("%s\n%s",str,s);
}
