#include <stdio.h>
#include <stdlib.h>

void main()
{

    float n=1;
    float sum=0;
    while(sum<2)
    {
        sum=sum+1/n;
        n++;
    }
    printf("%f",n-1);
    getch();
}
