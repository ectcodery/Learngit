#include<stdio.h>
void main()
{
    float r,l,s;
    printf("输入半径：");
    scanf("%f",&r);
    l=6.28*r;
    s=3.14*r*r;
    printf("周长=%f\n面积=%f",l,s);
    getch();

}
