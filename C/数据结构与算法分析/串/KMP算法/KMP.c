#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void next(char*ptr, int next[])
{
    int len, k, q;
    len = strlen(ptr);
    next[0] = -1;
    k = -1;
    for(q=1; q<=len-1;q++)
    {
        while(k>-1&&ptr[k+1]!=ptr[q])
            k = next[k];
        if(ptr[k+1]==ptr[q])
            k = k+1;
        next[q] = k;
    }

}


int KMP(char*str, char*ptr)
{
    int slen, plen, k, i, next1[100];
    slen = strlen(str);
    plen = strlen(ptr);
    k=-1;
    next(ptr, next1);
    for(i = 0;i<slen;i++)
    {
        while(k>-1&&ptr[k+1]!=str[i])
            k = next1[k];
        if(ptr[k+1]==str[i])
            k = k+1;
        if(k==plen-1)
            return i-plen+1;
    }
    return -1;
}



int main()
{
    int i;
    char*str = "abcdefg";
    char*ptr = "fg";
    i = KMP(str, ptr);
    printf("%d", i);
    return 0;
}
