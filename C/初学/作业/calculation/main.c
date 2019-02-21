#include<stdio.h>
float Lagrange(float x[],float y[],float xx,int n)        //nÎª£¨n+1£©´Î²åÖµ£»
{
	int i,j;
	float *a,yy=0;
		a=new float[n];
	for(i=0;i<=n-1;i++)
	{
		a[i]=y[i];
		for(j=0;j<=n-1;j++)
			if(j!=i)a[i]*=(xx-x[j])/(x[i]-x[j]);
		yy+=a[i];
	}
	delete a;
	return yy;
}
void main()
{
	float x[5]={-3.0,-1.0,1.0,2.0,3.0};
	float y[5]={1.0,1.5,2.0,2.0,1.0};
	float xx1=-2,xx2=0,xx3=2.75,yy1,yy2,yy3;
	yy1=Lagrange(x,y,xx1,3);
	yy2=Lagrange(x,y,xx2,3);
	yy3=Lagrange(x,y,xx3,3);
	printf("x1=%-20f,y1=%f\n",xx1,yy1);
	printf("x2=%-20f,y2=%f\n",xx2,yy2);
	printf("x3=%-20f,y3=%f\n",xx3,yy3);
}
