#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define maxsize 40
//定义单链表结构类型


typedef char datatype;
typedef struct node
{
   datatype data;
   struct node *next;
}linklist;

//定义顺序栈结构类型

typedef struct
{  datatype elements[maxsize];
   int top;
}stack;

//函数声明
stack * setnull();
int length(linklist*);
void printlink(linklist*);
void create(linklist *,datatype*);
void push(stack*,datatype);
datatype pop(stack*);
int symmetry(linklist*,stack*);//判字符串是否中心对称的函数声明



//主函数
void main()
{
	linklist *head;stack *s;
	datatype str[80];
	gets(str);
	create(head,str);
	printlink(head);
	s=setnull();
	if(symmetry(head,s)) printf("字符串\"%s\"中心对称\n",str);
	else printf("字符串\"%s\"不是中心对称\n",str);
}

//栈初始化
stack* setnull()
{
    stack *s;
	s=(stack*)malloc(sizeof(stack));
	s->top=-1;
	return s;
}

//求单链表长度
int length(linklist*head)
{  linklist *p=head->next;
   int n=0;
   while(p!=NULL)
    {  n++;
       p=p->next;
    }
   return n;
}

//输出单链表
void printlink(linklist*head)
{  linklist *p=head->next;
   while(p!=NULL)
   {  printf("%c",p->data);
      p=p->next;
   }
   printf("\n");
}

//建立具有头结点的单链表
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

//入栈
void push(stack*s,datatype e)
{
	s->top++;
	s->elements[s->top]=e;
}


//pop出栈
datatype pop(stack*s)
{
    if (s->top==-1)
        return '@';
	datatype temp;
	s->top--;
	temp=s->elements[s->top+1];
	return temp;
}

//判断函数
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
