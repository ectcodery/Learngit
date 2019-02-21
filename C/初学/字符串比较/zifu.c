#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],str[3][20];
    int i;
    for(i=0;i<3;i++)
        gets(str[i]);
    if(strcmp(str[0],str[1])>0)
        strcpy(s,str[0]);
    else strcpy(s,str[1]);
    if(strcmp(str[2],s)>0)
        strcpy(s,str[2]);
        strupr(s);
    printf("\nThe largest string is:%s ",s);


}
