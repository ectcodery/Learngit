
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	  printf("����������a��b��c:");
	  float a,b,c,p,x1,x2;

	  scanf("%f%f%f",&a,&b,&c);
      p=b*b-4*a*c;
	  if(p<0) printf("�˷����޽�");
	     else if(p==0)
	  {
	     x1=-b/(2*a);
		 printf("���̵Ľ�Ϊ��x1=x2=%f",x1);

	  }
              else
			  {
                    x1=(-b+sqrt(p))/(2*a);
					x2=(-b-sqrt(p))/(2*a);
					printf("���̵Ľ�Ϊ��x1=%f,x2=%f",x1,x2);




			  }




	   getch();
}
