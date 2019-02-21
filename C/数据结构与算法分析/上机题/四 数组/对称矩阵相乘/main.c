//对称矩阵相乘的程序代码
#include<stdio.h>
#include<malloc.h>
//数组结构类型的定义
#define n 3
#define size n*(n+1)/2
typedef int datatype;
typedef struct
{
	datatype A[size],B[size],C[n][n];
}array;

void input(datatype[]);
void output(datatype[][n]);
void mult(array*);

int main()
{
	array*pa;
	pa=(array*)malloc(sizeof(array));
	printf("以行为主序输入矩阵A的下三角:\n");
    input(pa->A);//以行为主序输入矩阵A的下三角
	printf("以行为主序输入矩阵B的下三角:\n");
	input(pa->B);//以行为主序输入矩阵B的下三角
	mult(pa);
	output(pa->C);//输出矩阵C
	return  0;
}

//对称矩阵的输入
void input(datatype x[])
{
    int i;
	for(i=0;i<size;i++)
		scanf("%d",&x[i]);
}

//矩阵的输出
void output(datatype x[][n])
{
    int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%5d",x[i][j]);
		printf("\n");
	}
}


//获取矩阵的某行或某列值至一一维数组pt
void getrc( int pb[] , int pt[] , int j )
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i>=j)
        pt[i] = pb[i*(i+1)/2+j];
        else
        pt[i] = pb[j*(j+1)/2+i];
    }
    return;
}


//对称矩阵相乘
void mult( array * pa )
{
    int row[n];
    int col[n];
    int i,j;
    int k;
    for( i=0 ; i<n ; i++ )
    {
        getrc( pa->A , row , i );
        for( j=0 ; j<n ; j++ )
        {
            getrc( pa->B , col , j );
            pa->C[i][j] = 0;
            for(k=0;k<n;k++) pa->C[i][j] += row[k]*col[k];
        }
    }
    return;
}







