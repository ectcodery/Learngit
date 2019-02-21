//交换左右子树的程序代码
#include<stdio.h>
#include<malloc.h>
//二叉链表的结构类型定义
#define maxsize 1024
typedef char datatype;
typedef struct node
{
	datatype data;
	struct node *lchild,*rchild;
}bitree;

bitree* creattree();
void  preorder(bitree*);
void  swap(bitree*);

int main()
{
	bitree*pb;
	pb=creattree();
	preorder(pb);
	printf("\n");
	swap(pb);
	preorder(pb);
	printf("\n");
	return 0;
}

//二叉树的建立
bitree *creattree()
{
	char ch;
	bitree *Q[maxsize];
	int front,rear;
	bitree *root,*s;
	root=NULL;
	front=1;rear=0;
	printf("按层次输入二叉树，虚结点输入'@'，以'#'结束输入：\n");
	while((ch=getchar())!='#')
	{
		s=NULL;
		if(ch!='@')
		{
			s=(bitree*)malloc(sizeof(bitree));
			s->data=ch;
			s->lchild=NULL;
			s->rchild=NULL;
		}
		rear++;
		Q[rear]=s;
		if(rear==1)root=s;
		else
		{
			if(s&&Q[front])
				if(rear%2==0)Q[front]->lchild=s;
				else Q[front]->rchild=s;
			if(rear%2==1)front++;
		}
	}
	return root;
}

//先序遍历按层次输出二叉树
void preorder(bitree*p)
{
	if(p!=NULL)
	{
		printf("%c",p->data);
		if(p->lchild!=NULL||p->rchild!=NULL)
		{
			printf("(");
			preorder(p->lchild);
			if(p->rchild!=NULL)printf(",");
			preorder(p->rchild);
			printf(")");
		}
	}
}

//交换左右子树
void swap( bitree * R )
{
    bitree * p;
    int n;
    if( R == NULL )return;
    if(R->lchild==NULL||R->rchild==NULL)
        n = 0;
    else
        n = R->lchild->data - R->rchild->data;
    if(n>0)
    {
        p = R->lchild;
        R->lchild = R->rchild;
        R->rchild = p;
    }
    swap( R->lchild );
    swap( R->rchild );
    return;
}
