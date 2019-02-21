#include <stdio.h>


int main()
{
    void swap(int *,int*);
    int a,b;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    swap(pa,pb);
    printf("a=%d,b=%d",a,b);
    getch();
    return 0;
}

void swap(int *a,int*b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
