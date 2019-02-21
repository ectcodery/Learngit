#include <stdio.h>
void main()
{
    /*四则运算计算器*/
    float a,b;
    char ch;
    scanf("%f%c%f",&a,&ch,&b);
    switch(ch)
    {
        case'+':printf("%f",a+b);break;
        case'-':printf("%f",a-b);break;
        case'*':printf("%f",a*b);break;
        case'/':if(b==0) printf("除数不能为零！");
                else  printf("%f",a/b);break;
        default:puts("输入有误！");
    }

    getch();

}
