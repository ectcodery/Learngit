#include <stdio.h>
void main()
{
    float x,y;
    printf("«Î ‰»Îx:");
    scanf("%f",&x);
    if(x<1)
        y=x;
    else if(x<3)
        y=2*x-1;
    else y=3*x*x-10;
    printf("%.2f",y);
    getch();
}
