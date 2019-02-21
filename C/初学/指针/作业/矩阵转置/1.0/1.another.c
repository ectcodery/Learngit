#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,(*pa)[3]=a;
    int sort(int a[3][3]);
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            printf("%4d",a[i][j]);
            printf("\n");
        }
        printf("\n");
    sort(a);
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            printf("%4d",a[i][j]);
            printf("\n");
        }
    return 0;
}


int sort(int a[3][3])
{
    int i,j,t,k=0;
    for(i=0;i<3;i++)
        for(j=2;j>=i;j--)
    {
        t=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=t;
        k+=1;
        if(k==9/2)
        return 0;

    }

}
