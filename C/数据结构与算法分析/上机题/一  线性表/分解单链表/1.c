//分解单链表的程序代码
#include<stdio.h>
#include<malloc.h>
//链表结构类型定义
typedef char datatype;
typedef struct node
{  datatype data;
   struct node *next;
}linklist;

linklist* create(linklist*);
void resolve(linklist*,linklist*,linklist*,linklist*);
void insert(linklist*,linklist*);
void print1(linklist*);
void print2(linklist*);


void main()
{  linklist *head,*letter,*digit,*other;
   head = create(head);
   print1(head);
   letter=(linklist*)malloc(sizeof(linklist));//建立3个空循环链表
   letter->next=letter;
   digit=(linklist*)malloc(sizeof(linklist));
   digit->next=digit;
   other=(linklist*)malloc(sizeof(linklist));
   other->next=other;
   resolve(head,letter,digit,other);//调用分解单链表的函数
   print2(letter);//输出循环链表
   print2(digit);
   print2(other);
}


//建立单链表
linklist* create(linklist* head)
{  datatype x;
   linklist *s,*r;
   head = (linklist*)malloc(sizeof(linklist));
   r=head;
   head->data = getchar();
   while((x=getchar())!='$')
   {
	  s=(linklist*)malloc(sizeof(linklist));
      s->data=x;
	  r->next=s;
	  r=s;
   }
   r->next=NULL;
   return head;
}

//在循环链表中插入
void insert(linklist*h,linklist*p)
{  linklist *q=h;
   while(q->next!=h) q=q->next;
   q->next=p;
   p->next=h;
}

//输出单链表
void print1(linklist*head)
{  linklist *p=head;
   while(p!=NULL)
   {  printf("%c",p->data);
      p=p->next;
   }
   printf("\n");
}

//输出循环链表
void print2(linklist*head)
{  linklist *p=head->next;
   while(p!=head)
   {
	   printf("%c",p->data);
       p=p->next;
   }
   printf("\n");
}

//按字母、数字、其它字符分解单链表
void resolve(linklist*head,linklist*letter,linklist*digit,linklist*other)
{
    linklist*p = head,*r;
    while(p!=NULL)
    {
        r=p->next;
        if((p->data>='a'&&p->data<='z')||(p->data>='A'&&p->data<='Z'))
            insert(letter,p);
        else if(p->data>='0'&&p->data<='9')
            insert(digit,p);
        else insert(other, p);
        p=r;

    }
}
