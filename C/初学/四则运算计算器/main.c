#include <stdio.h>
void main()
{
    /*�������������*/
    float a,b;
    char ch;
    scanf("%f%c%f",&a,&ch,&b);
    switch(ch)
    {
        case'+':printf("%f",a+b);break;
        case'-':printf("%f",a-b);break;
        case'*':printf("%f",a*b);break;
        case'/':if(b==0) printf("��������Ϊ�㣡");
                else  printf("%f",a/b);break;
        default:puts("��������");
    }

    getch();

}
