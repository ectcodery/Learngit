#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,(*pa)[3]=a;
    int sort(int (*p)[]);
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            printf("%4d",a[i][j]);
            printf("\n");
        }
        printf("\n");
    sort(pa);
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            printf("%4d",a[i][j]);
            printf("\n");
        }
    return 0;
}


int sort(int (*p)[3])
{
    int i,j,t,k=0;
    for(i=0;i<3;i++)
        for(j=2;j>=0;j--)
    {
        t=*(*(p+i)+j);
        *(*(p+i)+j)=*(*(p+j)+i);
        *(*(p+j)+i)=t;
        k+=1;
        if(k==9/2)
        return 0;

    }

}
