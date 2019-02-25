#include <stdio.h>
#include <stdlib.h>
typedef  char datatype;
typedef struct node
{
    datatype data;
    struct node* next;
}  linklist;


linklist *CreateListF();
linklist* CteateListR();
linklist*Get(linklist*, int);
linklist*Locate(linklist*, datatype);
void Insert(linklist*, datatype, int);
void Delete(linklist*, int);
void Change(linklist*, datatype, int);

linklist*CreateListF()  //Create a linklist by ͷ�巨����ͷǰ�壩
{
    linklist*head, *p;
    char ch;
    head = (linklist*)malloc(sizeof(linklist));
    head->next = NULL;
    while((ch = getchar())!='\n')
    {
        p = (linklist*)malloc(sizeof(linklist));
        p->data = ch;
        p->next = head->next;
        head->next = p;
    }
    return head;
}

linklist*CreateListR()  //Create a linklist by β�巨����ͷ��β��
{
    linklist *head, *p, *r;
    char ch;
    head = (linklist*)malloc(sizeof(linklist));
    head->next = NULL;
    r = head;
    while((ch = getchar())!='\n')
    {
        p = (linklist*)malloc(sizeof(linklist));
        p->data = ch;
        r->next = p;
        r = p;
    }
    r->next = NULL;
    return head;
}

linklist*Get(linklist*head, int i)
{
    linklist*p = head;
    int j=0;
    while(p->next!=NULL&&j<i)
    {
        p = p->next;
        j++;
    }
    if(i==j) return p;
    else return NULL;
}

linklist*Locate(linklist*head, datatype key)
{
    linklist*p = head->next;
    while(p!=NULL&&p->data!=key)
    {
        p = p->next;
    }
    if(p==NULL) return NULL;
    else return p;
}

void Insert(linklist*L, datatype x, int i)
{
    linklist*p, *s;
    p = Get(L,i-1);
    if(p==0) printf("���Ҳ�����i-1�����");
    else
    {
        s = (linklist*)malloc(sizeof(linklist));
        s->data = x;
        s->next = p->next;
        p->next = s;

    }
}

void Delete(linklist*L, int i)
{
    linklist*p, *r;
    p = Get(L, i-1);
    if(p!=NULL&&p->next!=NULL)
    {
        r = p->next;
        p->next = r->next;
        free(r);
    }
    else printf("��i����㲻����");

}

int Length(linklist*L)
{
    int i=0;
    linklist*p;
    p=L->next;
    while(p!=NULL)
    {
        p=p->next;
        i++;
    }
    return i;
}


void Change(linklist*L, datatype x, int i)
{
    linklist*p;
    p = Get(L,i);
    if(p!=NULL)
    {
        p->data = x;
    }
    else printf("��i����㲻����");
}

void PrintList(linklist*L)
{
    linklist*p;
    p=L->next;
    while(p!=NULL)
    {
        printf("%c", p->data);
        p = p->next;
    }
    printf("\n");
}


void del_node(linklist*L, datatype x)
{
    linklist*p,*r;
    p = L;
    while(p->next!=NULL)
    {
        if(p->next->data==x)
        {
            r=p->next;
            p->next = r->next;
        }
        else p=p->next;
    }
}



int main()
{
    int  i;
    datatype x;
    char y;
    linklist*L, *p;
    printf("�����ַ��������б�");
    L=CreateListR();
    PrintList(L);
    printf("����Ҫɾ����ֵ�����");
    scanf("%d",&i);
    Delete(L, i);
    PrintList(L);
    printf("����Ҫ�޸ĵ����");
    scanf("%d",&i);
    y=getchar();
    printf("����Ҫ�޸ĵ�ֵ");
    x=getchar();
    y=getchar();
    Change(L, x, i);
    PrintList(L);
    printf("����һ��ֵ���ҵ���Ӧֵ����");
    x=getchar();
    y=getchar();
    p = Locate(L,x);
    printf("%c\n",p->data);
    printf("���˳�����");
    printf("%d\n",Length(L));
    printf("����Ҫɾ����Ԫ��ֵ");
    x=getchar();
    y=getchar();
    del_node(L, x);
    PrintList(L);


    return 0;
}
