//�Գƾ�����˵ĳ������
#include<stdio.h>
#include<malloc.h>
//����ṹ���͵Ķ���
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
	printf("����Ϊ�����������A��������:\n");
    input(pa->A);//����Ϊ�����������A��������
	printf("����Ϊ�����������B��������:\n");
	input(pa->B);//����Ϊ�����������B��������
	mult(pa);
	output(pa->C);//�������C
	return  0;
}

//�Գƾ��������
void input(datatype x[])
{
    int i;
	for(i=0;i<size;i++)
		scanf("%d",&x[i]);
}

//��������
void output(datatype x[][n])
{
    int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%5d",x[i][j]);
		printf("\n");
	}
}


//��ȡ�����ĳ�л�ĳ��ֵ��һһά����pt
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


//�Գƾ������
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







