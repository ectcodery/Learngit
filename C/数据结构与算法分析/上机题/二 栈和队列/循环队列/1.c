//ѭ��������ӳ��ӵĳ������
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
//ѭ�����еĽṹ���Ͷ���
#define m 5
typedef int datatype;

typedef struct
{   datatype data[m];
    int  rear, quelen;
}qu;

void setnull(qu*);
int enqueue(qu*, datatype);
datatype *dequeue(qu*);

void main()
{  qu *sq;
   datatype x, *p;
   int key;
   sq=(qu*)malloc(sizeof(qu));
   setnull(sq);
   do
   {  printf("1.Enter Queue   2.Delete Queue   -1.Quit:");
      scanf("%d",&key);
      switch(key)
      {  case 1:  printf("Enter the Data:"); scanf("%d",&x);
		          enqueue(sq,x);  break;
	     case 2:  p=dequeue(sq);
		          if(p!=NULL) printf("%d\n",*p);
		          break;
	     case -1: exit(0);
      }
   }while(1);
}

//�ÿն�
void setnull(qu *sq)
{  sq->rear=m-1;
   sq->quelen=0;
}

//���
int enqueue(qu* sq, datatype x)
{
    if (sq->quelen==m)
        {
            printf("��������\n");
            return 0;
        }
    else
    {
        sq->rear=(sq->rear+1)%m;
        sq->data[sq->rear] = x;
        sq->quelen++;
        return 1;
    }

}




//����

datatype *dequeue(qu* sq)
{
    int *n;
    if(sq->quelen==0)
    {
        printf("��������\n");
        return NULL;
    }
    else
    {
        n = &sq->data[(sq->rear+m-sq->quelen+1)%m];
        sq->quelen--;
        return n;
    }
}
