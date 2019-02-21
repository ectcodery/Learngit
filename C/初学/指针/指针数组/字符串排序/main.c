#include <stdio.h>
#include<string.h>
#define N 5

void sort(char *[],int);
int main()
{
    char s[N][100],*ps[N];
    int i;
    for(i=0;i<N;i++)
        gets(s[i]);
    for(i=0;i<N;i++)
        ps[i]=s[i];
    sort(ps,N);
    for(i=0;i<N;i++)
        printf("%s\n",ps[i]);




    return 0;
}

void sort(char *s[],int n)
{
    int i ,j,k;
    char t[100];
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
            if (strcmp(s[j],s[k])>0) k=j;
        if(k!=i)
        {
            strcpy(t,s[i]);
            strcpy(s[i],s[k]);
            strcpy(s[k],t);
        }


    }
}

