#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main()           /*指针数组表示二维数组*/
{
    int n;
    printf("几阶矩阵？：");
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    int sort(int *p[],int);
    srand(time(0));
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           a[i][j]=rand()%(11-i)+i;
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            printf("%4d",a[i][j]);
            printf("\n");
        }
        printf("\n");
    int *pa[n];
    for(i=0;i<n;i++)
        pa[i]=a[i];
    sort(pa,n);
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            printf("%4d",a[i][j]);
            printf("\n");
        }
    return 0;
}


int sort(int *p[], int n)
{
    int i,j,t,k=0;
    for(i=0;i<n;i++)
        for(j=(n-1);j>=i;j--)
    {
        t=*(*(p+i)+j);
        *(*(p+i)+j)=*(*(p+j)+i);
        *(*(p+j)+i)=t;
        k+=1;
        if(k==n*n/2)
        return 0;

    }

}
