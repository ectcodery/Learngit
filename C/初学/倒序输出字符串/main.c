#include <stdio.h>
#include<string.h>
void main()
{
    char s[50],ch;
    int i,n,len;
    gets(s);
    len=strlen(s);
    n=(len-1)/2;

    for(i=0;i<=n;i++)
    {
        ch=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=ch;
    }
    printf("%s",s);



    getch();

}
