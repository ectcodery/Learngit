
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
      int i,n;
	  float k,sum=0,ave,s,mid=0;
	printf("几个数据?：");
	  scanf("%d",&n);
	  for(i=1;i<=n;i++)
	  {
	     scanf("%f",&k);
		 sum=sum+k;

	  }
	  ave=sum/n;
	  for(i=1;i<=n;i++)
	  {
             scanf("%f",&k);
			 mid=mid+(k-ave)*(k-ave);




	  }
	  s=sqrt(mid/(n-1));
	  printf("ave=%f,s=%f",ave,s);






	   getch();
}
