//�ֽⵥ����ĳ������
#include<stdio.h>
#include<malloc.h>
//����ṹ���Ͷ���
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
   letter=(linklist*)malloc(sizeof(linklist));//����3����ѭ������
   letter->next=letter;
   digit=(linklist*)malloc(sizeof(linklist));
   digit->next=digit;
   other=(linklist*)malloc(sizeof(linklist));
   other->next=other;
   resolve(head,letter,digit,other);//���÷ֽⵥ����ĺ���
   print2(letter);//���ѭ������
   print2(digit);
   print2(other);
}


//����������
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

//��ѭ�������в���
void insert(linklist*h,linklist*p)
{  linklist *q=h;
   while(q->next!=h) q=q->next;
   q->next=p;
   p->next=h;
}

//���������
void print1(linklist*head)
{  linklist *p=head;
   while(p!=NULL)
   {  printf("%c",p->data);
      p=p->next;
   }
   printf("\n");
}

//���ѭ������
void print2(linklist*head)
{  linklist *p=head->next;
   while(p!=head)
   {
	   printf("%c",p->data);
       p=p->next;
   }
   printf("\n");
}

//����ĸ�����֡������ַ��ֽⵥ����
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
