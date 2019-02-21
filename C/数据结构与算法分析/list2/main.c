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

linklist*CreateListF()  //Create a linklist by 头插法（在头前插）
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

linklist*CreateListR()  //Create a linklist by 尾插法（从头往尾）
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
    if(p==0) printf("查找不到第i-1个结点");
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
    else printf("第i个结点不存在");

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
    else printf("第i个结点不存在");
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
    printf("输入字符，创建列表");
    L=CreateListR();
    PrintList(L);
    printf("输入要删除的值的序号");
    scanf("%d",&i);
    Delete(L, i);
    PrintList(L);
    printf("输入要修改的序号");
    scanf("%d",&i);
    y=getchar();
    printf("输入要修改的值");
    x=getchar();
    y=getchar();
    Change(L, x, i);
    PrintList(L);
    printf("输入一个值，找到对应值。。");
    x=getchar();
    y=getchar();
    p = Locate(L,x);
    printf("%c\n",p->data);
    printf("获得顺序表长度");
    printf("%d\n",Length(L));
    printf("输入要删除的元素值");
    x=getchar();
    y=getchar();
    del_node(L, x);
    PrintList(L);


    return 0;
}
