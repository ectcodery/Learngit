
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	  printf("请依次输入a，b，c:");
	  float a,b,c,p,x1,x2;

	  scanf("%f%f%f",&a,&b,&c);
      p=b*b-4*a*c;
	  if(p<0) printf("此方程无解");
	     else if(p==0)
	  {
	     x1=-b/(2*a);
		 printf("方程的解为：x1=x2=%f",x1);

	  }
              else
			  {
                    x1=(-b+sqrt(p))/(2*a);
					x2=(-b-sqrt(p))/(2*a);
					printf("方程的解为：x1=%f,x2=%f",x1,x2);




			  }




	   getch();
}
