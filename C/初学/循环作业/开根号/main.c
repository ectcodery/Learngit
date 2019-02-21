#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main()
{
    float a,x,y;
    printf("ÇëÊäÈëa:");
    scanf("%f",&a);
    y=a/2;
    x=a;
    while(fabs(y-x)>=0.00001)
 {
     x=y;
     y=(x+a/x)/2;


 }
 printf("%f",y);
 getch();
}
