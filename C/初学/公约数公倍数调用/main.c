#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b;
    int c,d;
    int may(int,int);
    int mib(int,int);
    printf("请输入两个整数：");
    scanf("%d%d",&a,&b);
    c=may(a,b);
    d=mib(a,b);
    printf("最大公约数为%d,最小公倍数为%d",c,d);
    getch();


}





