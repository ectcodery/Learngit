#include <stdio.h>
#include <stdlib.h>

int main()           /*ָ�������ʾ��ά����*/
{
    int n;
    printf("���׾��󣿣�");
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    int sort(int *p[],int);
     for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
        }
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
