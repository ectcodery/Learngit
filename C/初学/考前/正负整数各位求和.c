#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int count=0,sum=0;
    scanf("%d",&n);
    while(n)
    {
        sum=sum+n%10;
        n=n/10;
        count=count+1;
    }
    printf("count=%d",count);
    printf("sum=%d",sum);



    return 0;
}
