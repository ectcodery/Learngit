#include<stdio.h>
#include<malloc.h>
#define maxsize 1024
//顺序表结构类型定义
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
	L=create(L);//建立顺序表
	print(L);//输出顺序表
	invert(L);//调用顺序表逆值的函数
	print(L);//输出顺序表
}

//建立顺序表
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

//输出顺序表
void print(sequenlist*L)
{
    int i;
	for(i=1;i<=L->last;i++)
		printf("%2c",L->data[i]);
	printf("\n");
}

//顺序表逆置
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
