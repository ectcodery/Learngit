#include <iostream>

using namespace std;

//找马鞍点程序代码
#include<stdio.h>
#include<malloc.h>
#define m 3
#define n 3
//数组的结构类型定义

typedef struct{
	int A[m+1][n+1];
	int max[m+1],min[n+1];
}array;

void minmax(array*);
void print(array*);


int  main()
{
	array*pa=(array*)malloc(sizeof(array));
	cout << "请输入一三阶矩阵：\n";
    int i, j;
    for (i=1;i<=m;i++)
      for (j=1;j<=n;j++)
        scanf("%d",&pa->A[i][j]);
    print(pa);
    minmax(pa);
    return 0;
}

void print(array*pa)
{
    int i, j;
    cout << "\n输入矩阵为：\n";
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            cout << pa->A[i][j] << " ";
        cout << '\n' << endl;
    }

}

//找马鞍点
void minmax(array* pa)
{
    int i,j,have=0;

    for(i=1;i<=m;i++)
    {
        pa->min[i] = pa->A[i][1];
        for(j=1;j<=n;j++)
        {
            if(pa->A[i][j] < pa->min[i])
                pa->min[i] = pa->A[i][j];
        }
    }//find the minimum in m rows

    for(j=1;j<=n;j++)
    {
        pa->max[j] = pa->A[1][j];
        for(i=1;i<=m;i++)
        {
            if(pa->A[i][j] > pa->max[j])
                pa->max[j] = pa->A[i][j];
        }
    }// find the maximum in n columns

    //find the maan points
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            if(pa->min[i] == pa->max[j])
                {
                    cout << i << ',' << j << "," << pa->A[i][j] << endl;
                    have += 1;
                }
    if(have==0) cout << "矩阵中没有马鞍点！" << endl;
    else cout << "矩阵中共有 " << have << " 个马鞍点！" << endl;

}

