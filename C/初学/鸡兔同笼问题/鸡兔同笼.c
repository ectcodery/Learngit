#include<stdio.h>
void main()
{
  int a,b,c,d;
  printf("����������ͷ���������");
  scanf("%d%d",&a,&b);
  if((b>=2*a)&&(b<=4*a)&&(b%2==0))
  {
      d=(b-2*a)/2;
      c=a-d;
      printf("������ĿΪ��%d\n�õ���ĿΪ��%d",c,d);

  }
  else printf("��������");
  getch();
}
