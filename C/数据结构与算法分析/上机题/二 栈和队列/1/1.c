#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define maxsize 40
//���嵥����ṹ����


typedef char datatype;
typedef struct node
{
   datatype data;
   struct node *next;
}linklist;

//����˳��ջ�ṹ����

typedef struct
{  datatype elements[maxsize];
   int top;
}stack;

//��������
stack * setnull();
int length(linklist*);
void printlink(linklist*);
void create(linklist *,datatype*);
void push(stack*,datatype);
datatype pop(stack*);
int symmetry(linklist*,stack*);//���ַ����Ƿ����ĶԳƵĺ�������



//������
void main()
{
	linklist *head;stack *s;
	datatype str[80];
	gets(str);
	create(head,str);
	printlink(head);
	s=setnull();
	if(symmetry(head,s)) printf("�ַ���\"%s\"���ĶԳ�\n",str);
	else printf("�ַ���\"%s\"�������ĶԳ�\n",str);
}

//ջ��ʼ��
stack* setnull()
{
    stack *s;
	s=(stack*)malloc(sizeof(stack));
	s->top=-1;
	return s;
}

//��������
int length(linklist*head)
{  linklist *p=head->next;
   int n=0;
   while(p!=NULL)
    {  n++;
       p=p->next;
    }
   return n;
}

//���������
void printlink(linklist*head)
{  linklist *p=head->next;
   while(p!=NULL)
   {  printf("%c",p->data);
      p=p->next;
   }
   printf("\n");
}

//��������ͷ���ĵ�����
void create(linklist *head,datatype*str)
{  datatype *p=str;
   linklist *s,*r;
   head=(linklist*)malloc(sizeof(linklist));
   r=head;
   while(*p!='\0')
   {
	  s=(linklist*)malloc(sizeof(linklist));
      s->data=*p;
	  r->next=s;
	  r=s;
	  p++;
   }
   r->next=NULL;

}

//��ջ
void push(stack*s,datatype e)
{
	s->top++;
	s->elements[s->top]=e;
}


//pop��ջ
datatype pop(stack*s)
{
    if (s->top==-1)
        return '@';
	datatype temp;
	s->top--;
	temp=s->elements[s->top+1];
	return temp;
}

//�жϺ���
int symmetry(linklist*head,stack*s)
{
    int l, i;
    linklist*p = head;
    l = length(head);
    for(i=0;i<=(l-1)/2;i++)
    {
        push(s,p->data);
        p = p->next;
    }
    if(l%2==1) pop(s);
    while(p!=NULL)
    {
       if(pop(s)==p->data)
        p=p->next;
       else break;
    }
    if(p==NULL)
        return 1;
    else
        return 0;
}
