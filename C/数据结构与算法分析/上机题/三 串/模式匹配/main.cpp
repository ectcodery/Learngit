#include <iostream>

using namespace std;

#include<stdio.h>
#include<string.h>
#include<malloc.h>
//˳�򴮵Ľṹ���Ͷ���
#define maxsize 100
typedef struct
{
	char str[maxsize];
    int len;
}seqstring;

int  Index(seqstring*, seqstring*);

int  main()
{
    int n;
	seqstring*S,*subS;
	S=(seqstring*)malloc(sizeof(seqstring));
	subS=(seqstring*)malloc(sizeof(seqstring));
	printf("���봮��"); gets(S->str);
	S->len=strlen(S->str);
	printf("�����Ӵ���"); gets(subS->str);
	subS->len=strlen(subS->str);
	n = Index(S,subS);
	if(n>0) cout << "ƥ��ɹ�! ��һ���ɹ���Ϊ��" << n << "���ַ�"<< endl;
	else cout << "ƥ��ʧ�ܣ�" << endl;
	return 0;
}

//˳�򴮵�����ģʽƥ��
int Index(seqstring*S,seqstring*Subs)
{
    int i=1,j=1;
    while(i<=S->len&&j<=Subs->len)
    {
        if(S->str[i-1]==Subs->str[j-1])
        {
            i++;
            j++;
        }
        else
        {
            i=i-j+2;j=1;
        }
    }
    if(j>Subs->len) return (i-Subs->len);
    else return 0;
}
