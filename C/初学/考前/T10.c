		/*编写用户自定义函数，判断字符串当中是否有
          相同的字符，有返回1，没有则返回0。*/
#include <stdio.h>	
#include <stdlib.h>
int judge(char a[])
{
    int i,j,t;
    for(i=0;a[i]!='\0';i++)
       t=i;
    for(i=0;i<t-1;i++)
        for(j=i+1;j<t;j++)
    {
        if(a[i]==a[j])
            return 1;

    }
    return 0;

}

int main()
{
    int n;
    char a[30];
    gets(a);
    n=judge(a);
    printf("%d",n);

   return 0;
}