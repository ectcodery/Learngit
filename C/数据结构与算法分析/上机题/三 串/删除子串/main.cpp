#include <iostream>

using namespace std;

//ɾ���Ӵ��ĳ������
#include<stdio.h>
#include<string.h>
#include<malloc.h>
//˳�򴮵Ľṹ���Ͷ���
#define maxsize 256
typedef struct
{
	char str[maxsize];
    int length;
}seqstring;

void strPut(seqstring*);
void strDelete(seqstring*,int,int);
int main()
{
	seqstring*S;
	int pos,len;
	S=(seqstring*)malloc(sizeof(seqstring));
	printf("���봮��"); gets(S->str);
	S->length=strlen(S->str);
	strPut(S);
	printf("ɾ���Ŀ�ʼλ��:");scanf("%d",&pos);
	printf("ɾ�����ַ�����:");scanf("%d",&len);
	strDelete(S,pos,len);
	strPut(S);
	return 0;
}

//�����
void strPut(seqstring*S)
{
	int i;
	for(i=0;i<S->length;i++)
		printf("%c",S->str[i]);
	printf("\n"); printf("Length:%d\n",S->length);
}

//���ɾ���Ӵ��㷨
void strDelete(seqstring* s,int pos,int len)
{
    char temp[maxsize];
    if(pos>=1&&pos<=s->length-len+1)
    {
        strncpy(temp,s->str,pos-1);
        strcpy(temp+pos-1,s->str+pos+len-1);
        strcpy(s->str,temp);
        s->length = s->length-len;
    }
    else cout << "ɾ��λ�ó������䣡" << endl;

}
