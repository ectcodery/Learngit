#include <stdio.h>
#include <stdlib.h>


void main()
{
    int m,n,r;
    int factor(int);
    printf("����������m��n��");
    scanf("%d%d",&m,&n);
    r=factor(m)/(factor(n)*factor(m-n));
    printf("%d",r);

}


