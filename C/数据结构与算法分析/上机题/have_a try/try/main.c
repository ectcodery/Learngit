#include <stdio.h>
#include <stdlib.h>

typedef char datatype;

typedef struct node
{
    datatype data;
   struct node *next;
}linklist;

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

linklist*newlink()
{
    linklist* head;
    head=(linklist*)malloc(sizeof(linklist));
    return head;

}


int main()
{
    linklist *head;
    char str[30];
    gets(str);
    head = newlink();
    create(head, str);
    printlink(head);
    return 0;
}
