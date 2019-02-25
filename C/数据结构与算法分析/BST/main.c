#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char *f_name;

typedef int datatype;
typedef char keytype;
typedef struct node
{
   keytype *key;
   datatype f;
   struct node * lchild, *rchild;
} bstnode;

char *read(char*);
void inorder(bstnode*, int*, int*);
bstnode* InsertBstNode(bstnode*, bstnode*);
bstnode* CreateBst();
bstnode* SearchBst(bstnode *, keytype* );
void DeleteBstNode(bstnode* , keytype*);

int main()
{
    int key;
    char temp[30];
    int *norep_wordsnum, *wordsnum;
    norep_wordsnum = (int*)malloc(sizeof(int));
    wordsnum = (int*)malloc(sizeof(int));
    bstnode *t,*p;


    do
    {
        printf("\n\n\n*******************************************************************************\n");
        printf("1.��ȡ�ı�   2.����ͣ�ô�   3.�������   4.��ѯ  -1.Quit:");
        scanf("%d",&key);
        switch(key)
        {  case 1:
               printf("\nȷ��Ŀ���ļ���ͬһĿ¼�ڣ�������txt�ļ����ƣ�");
               scanf("%s",temp);
               f_name = temp;
               strcat(f_name,".txt");
               t = CreateBst();
               if(t==NULL)
                    printf("����ʧ�ܣ�\n");
               break;

           case 2:
               if(t!=NULL)
               {
                   printf("\n(����-1�˳�)  Ҫɾ��ʲô��");
                   scanf("%s",temp);
                   while(strcmp(temp, "-1")!=0)
                   {
                       printf("%s ",temp);
                       DeleteBstNode(t,temp);
                       printf("(����-1�˳�)  Ҫɾ��ʲô��");
                       scanf("%s",temp);
                   }
                   break;
               }
               else
               {
                   printf("��ǰ��Ϊ�գ�\n");
                   break;
               }


           case 3:
               if(t!=NULL)
               {
                   (*norep_wordsnum) = 0;
                   (*wordsnum) = 0;
                   inorder(t, norep_wordsnum, wordsnum);
                   printf("\n������ɣ�\n");
                   printf("�ı��й�������%d�����ظ��ĵ��ʣ��ı��й���%d������\n",(*norep_wordsnum),(*wordsnum));
                   break;
               }
               else
               {
                   printf("��ǰ��Ϊ�գ�\n");
                   break;
               }

           case 4:
               if(t!=NULL)
               {
                    printf("\n(����-1�˳�)  Ҫ��ѯʲô��");
                    scanf("%s",temp);
                    while(strcmp(temp, "-1")!=0)
                    {
                       p = SearchBst(t,temp);
                       if(p!=NULL)
                           printf("%s %d\n",p->key,p->f);
                       printf("(����-1�˳�)  Ҫ��ѯʲô��");
                       scanf("%s",temp);
                    }
                    break;
               }
               else
               {
                   printf("��ǰ��Ϊ�գ�\n");
                   break;
               }

           case -1: exit(0);
        }
    }while(1);




    return 0;

}

//�����ļ�������һ���ļ��ַ���
char *read(char str[])

/*����txt�ļ������������ַ����ɵ�һ���ַ���*/

{
    FILE * fp;
    char s[500];
    int i;
    fp = fopen (f_name , "r");
    if (fp == NULL)
    {
        printf ("Error opening file\n");
        fclose (fp);
        return NULL;
    }

    else
    {
         while((fgets(s,500,fp))!=NULL)
            {

                strcat(str,s);
            }
        fclose (fp);
    }
    strlwr(str);
    for(i=0;i<strlen(str);i++)
    {
        if(!((str[i]>=97&&str[i]<=122)||(str[i]=='\''&&str[i-1]!=' '&&str[i+1]!=' ')))
            str[i] = ' ';
    }
    return str;
}

//�������BST
void inorder(bstnode* p, int *m,int *n)
{
    if(p!=NULL)
    {
        inorder(p->lchild,m,n);
        printf("%s %d\n",p->key,p->f);
        (*m)+=1;
        (*n)+=p->f;
        inorder(p->rchild,m,n);
    }
}

//�ǵݹ��㷨�����½ڵ�
bstnode* InsertBstNode(bstnode*t, bstnode*s)
{
    bstnode *pre, *p;
    if(t==NULL)
        return s;
    p = t;
    while(p!=NULL)
    {
        pre = p;
        if(strcmp(s->key,p->key)<0)
            p = p->lchild;
        else if(strcmp(s->key,p->key)==0)
        {
            p->f += 1;
            return t;
        }
        else
            p = p->rchild;
    }
    if(strcmp(s->key,pre->key)<0)
        pre->lchild = s;
    else
        pre->rchild = s;
    return t;
}

//����BST
bstnode* CreateBst()
/*��һtxt�ļ���Ӧ���ַ������зִʴ������������������ɶ���������\
   �Ҷ������������������ʳ��ִ���*/
{
    char st[500000]={"  "}, *str, *ss;
    bstnode *t, *s;
    t=NULL;
    str = read(st);
    if (str==NULL)
        return NULL;

    else
    {
        ss=strtok(str," ");
        while (ss != NULL)
          {
            s = (bstnode*)malloc(sizeof(bstnode));
            s->key = ss;
            s->f = 1;
            s->lchild = NULL;
            s->rchild = NULL;
            t = InsertBstNode(t,s);
            ss = strtok (NULL, " ");
          }
        printf("�����������ɹ�!\n");
        return t;
    }
}

//���ҽڵ�
bstnode* SearchBst(bstnode *t, keytype* key)
{
    while(t!=NULL&&strcmp(key,t->key)!=0)
    {
        if(strcmp(key,t->key)<0)
            t = t->lchild;
        else
            t = t->rchild;
    }
    if(t==NULL)
    {
        printf("No This Word: %s\n",key);
        return NULL;
    }
    else
        return t;
}


//ɾ�����
void DeleteBstNode(bstnode* t, keytype* key)
{
    bstnode *p, *q;
    p = t;
    keytype *temp_key;
    datatype temp_f;
    while(p!=NULL&&strcmp(key,p->key)!=0)
    {
        q = p;
        if(strcmp(key,p->key)<0)
            p = p->lchild;
        else
            p = p->rchild;
    }
    if(p==NULL)
        printf("<- No This Word\n");
    else
    {
        if(p->lchild==NULL&&p->rchild==NULL)
        {
            if(p==q->lchild)
                q->lchild = NULL;
            if(p==q->rchild)
                q->rchild = NULL;
            free(p);
            p = NULL;
            printf("ɾ���ɹ���\n");
        }

        else if(p->lchild!=NULL&&p->rchild==NULL)
        {
            if(p==q->lchild)
                q->lchild = p->lchild;
            if(p==q->rchild)
                q->rchild = p->lchild;
            free(p);
            p = NULL;
            printf("ɾ���ɹ���\n");
        }

         else if(p->lchild==NULL&&p->rchild!=NULL)
        {
            if(p==q->lchild)
                q->lchild = p->rchild;
            if(p==q->rchild)
                q->rchild = p->rchild;
            free(p);
            p = NULL;
            printf("ɾ���ɹ���\n");
        }

        else if(p->lchild!=NULL&&p->rchild!=NULL)
        {
            bstnode *s, *sparent;
            sparent = p;
            s = sparent->lchild;
            while(s->rchild!=NULL)
            {
                sparent = s;
                s = s->rchild;
            }
            temp_key = s->key;
            temp_f = s->f;
            DeleteBstNode(t,temp_key);
            p->key = temp_key;
            p->f = temp_f;
        }


    }
}

