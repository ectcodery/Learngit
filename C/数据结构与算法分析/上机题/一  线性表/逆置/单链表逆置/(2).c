//���������õĳ������
#include<malloc.h>
#include<stdio.h>
//������ṹ���Ͷ���
typedef char datatype;
typedef struct node
{
	datatype data;
	struct node *next;
}linklist;

linklist* create(linklist*);
void print(linklist *);
void invert(linklist*);
void main()
{
	linklist*head;
	head = create(head);
	print(head);
	invert(head);//���õ��������õĺ���
	print(head);
}

//����β�巨��������ͷ���ĵ�����
linklist* create(linklist *head)
{
	char ch;
	linklist *s,*r;
	head=(linklist*)malloc(sizeof(linklist));
	r=head;


	while((ch=getchar())!='*')
	{
		s=(linklist*)malloc(sizeof(linklist));
		s->data=ch;
		r->next=s;
		r=s;
	}
	r->next=NULL;
	return head;
}

//���������
void print(linklist *head)
{
	linklist*p=head->next;
	while(p!=NULL)
	{
		printf("%2c",p->data);
		p=p->next;
	}
	printf("\n");
}




//����������

void invert(linklist*head)
{
    linklist*p=head->next,*r=p->next,*s,*q=p;
    while(r!=NULL)
    {
        s=r;
        r=r->next;
        s->next = p;
        p=s;
    }
    head->next = p;
    q->next = NULL;
}
