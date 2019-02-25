/*编写用户自定义函数，实现给定一个字符串，
得到该字符串的长度，并实现将其中的小写字母转换成大写字母。
（不得使用字符串相关的库函数！）*/
#include<stdio.h>
void func(char a[])
{
    int i,t;
    for(i=0;a[i]!='\0';i++);
    t=i;
    printf("The length is:%d\n",t);
    for(i=0;i<t;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            a[i]-=32;
        printf("%c",a[i]);
    }



}
void main()
{
    char s[50];
    gets(s);
    func(s);

}
