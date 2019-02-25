#include<stdio.h>
#include<stdlib.h>
#define maxsize 1024
/**   关于线性表的基本操作
    查，改，增，删，定长度
*/
typedef int datatype;
typedef struct
{
    int data[maxsize];
    int last;
} sequenlist;

sequenlist*InitList();
int Length(sequenlist*);
int Insert(sequenlist*, datatype, int);
int Locate(sequenlist*, datatype);
int Delete(sequenlist*, int);
int Modify(sequenlist*, datatype, int);
void del_node(sequenlist*, datatype );
void PrintList(sequenlist*);


sequenlist*InitList()  //   生成一个空顺序表
{
    sequenlist*L = (sequenlist*)malloc(sizeof(sequenlist));
    L->last = 0;
    return L;
}


int Insert(sequenlist*L, datatype x, int i) //  插入新元素
{
    int j;
    if(L->last>=maxsize-1)
    {
        printf("表已满");
        return 0;
    }
    else
    {
        for(j = L->last; j>=i; j--)  L->data[j+1] = L->data[j];
        L->data[i] = x;
        L->last++;
        return 1;

    }
}

int Length(sequenlist*L) // get the length of the sequenlist
{
    return L->last;
}


int Locate(sequenlist*L, datatype x)  //locate the position of x
{
    int i = 1;
    while(i<=L->last)
    {
        if (L->data[i] == x)
            return i;
        i++;

    }
    return 0;
}

int Delete(sequenlist*L, int i)  //delete the    i.th  element in the sequenlist
{
    int j;
    if(i<1||i>L->last)
    {
        printf("删除的是非法位置");
        return 0;
    }
    else
    {
        for (j=i; j<=L->last-1; j++)
            L->data[j] = L->data[j+1];
        L->last--;
        return 1;
    }
}

int Modify(sequenlist*L, datatype x, int i)  // change the i.th element to x(added by myself)
{
    if(i<1||i>L->last)
    {
        printf("修改的是非法位置");
        return 0;
    }
    else
    {
        L->data[i] = x;
        return 1;
    }
}


void del_node(sequenlist*L, datatype x)  //delete all elements whose value is x
{
    int k;
    k = Locate(L, x);
    while(k)
    {
        Delete(L,k);
        k = Locate(L, x);
    }
}

void PrintList(sequenlist*L)  //print the whole sequenlist
{
    int i;
    for(i=1; i<=L->last; i++)
        printf("%5d",L->data[i]);
    printf("\n");
}




int main()
{
    sequenlist*L;
    L = InitList();
    int i=0;
    datatype x;
    printf("输入几个整型数据，建立顺序表（输入-1结束）：");
    scanf("%d",&x);
    while(x!=-1)
    {
        i++;
        if(!Insert(L, x, i))  exit(0);
        scanf("%d", &x);
    }
    PrintList(L);
    printf("输入要删除的值的序号");
    scanf("%d",&x);
    Delete(L, x);
    PrintList(L);
    printf("输入要修改的序号与其值");
    scanf("%d",&i);
    scanf("%d",&x);
    Modify(L, x, i);
    PrintList(L);
    printf("输入一个值，找到对应序号");
    scanf("%d",&x);
    i = Locate(L,x);
    printf("%d\n",i);
    printf("获得顺序表长度");
    printf("%d\n",Length(L));
    printf("输入要删除的元素值");
    scanf("%d",&x);
    del_node(L, x);
    PrintList(L);


    return 0;
}
