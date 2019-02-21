#include<stdio.h>
#include<malloc.h>
#define maxsize 1024
//˳���ṹ���Ͷ���
typedef char datatype;
typedef struct
{
    datatype data[maxsize];
    int last;
}sequenlist;

sequenlist* create(sequenlist*);
void print(sequenlist*);
void invert(sequenlist*);

void main()
{
	sequenlist*L;
	L=create(L);//����˳���
	print(L);//���˳���
	invert(L);//����˳�����ֵ�ĺ���
	print(L);//���˳���
}

//����˳���
sequenlist* create(sequenlist*L)
{
	L=(sequenlist*)malloc(sizeof(sequenlist));
	L->last=0;
	char ch;
	while((ch=getchar())!='*')
	{
		L->last++;
		L->data[L->last]=ch;
	}
	return L;
}

//���˳���
void print(sequenlist*L)
{
    int i;
	for(i=1;i<=L->last;i++)
		printf("%2c",L->data[i]);
	printf("\n");
}

//˳�������
void invert(sequenlist*L)
{
    int i;
	int n=L->last/2;
	for(i=1;i<=n;i++)
	{
		char temp=L->data[i];
		L->data[i]=L->data[L->last-i+1];
        L->data[L->last-i+1]=temp;
	}
}
