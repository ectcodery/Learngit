#include <iostream>

using namespace std;

#include<stdio.h>
#include<string.h>
#include<malloc.h>
//顺序串的结构类型定义
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
	printf("输入串："); gets(S->str);
	S->len=strlen(S->str);
	printf("输入子串："); gets(subS->str);
	subS->len=strlen(subS->str);
	n = Index(S,subS);
	if(n>0) cout << "匹配成功! 第一个成功处为第" << n << "个字符"<< endl;
	else cout << "匹配失败！" << endl;
	return 0;
}

//顺序串的朴素模式匹配
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
