#include<stdio.h>
void main()
{
  int a,b,c,d;
  printf("请依次输入头数与脚数：");
  scanf("%d%d",&a,&b);
  if((b>=2*a)&&(b<=4*a)&&(b%2==0))
  {
      d=(b-2*a)/2;
      c=a-d;
      printf("鸡的数目为：%d\n兔的数目为：%d",c,d);

  }
  else printf("输入有误！");
  getch();
}
