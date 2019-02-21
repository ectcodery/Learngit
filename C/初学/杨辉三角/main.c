#include <stdio.h>


void main()
{
    int s[12][12];
    int i,j;
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
          {
              if(i==j||j==0)
           s[i][j]=1;
          }
    for(i=2;i<12;i++)
        for(j=1;j<i;j++)
        s[i][j]=s[i-1][j]+s[i-1][j-1];
    for(i=0;i<12;i++)
        for(j=0;j<=i;j++)
        {printf("%4d",s[i][j]);
        if(j==i)
            printf("\n");
        }


}
