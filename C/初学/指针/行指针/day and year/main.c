#include <stdio.h>
int day_of_year(int year,int month,int day,int *pi)
{
    int i,leap;
    leap=year%4==0&&year%100!=0||year%400==0;
    for(i=1;i<month;i++)
        day+=*(pi+leap*13+i);
    return  day;

}
void month_day(int year,int day,int(*p)[13],int*pmonth,int*pday)
{
    int i,leap;
    leap=year%4==0&&year%100!=0||year%400==0;
    for(i=1;day>*(*(p+leap)+i);i++)
        day-=*(*(p+leap)+i);
    *pmonth=i;
    *pday=day;
}

void main()
{
    int daytab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
                       {0,31,29,31,30,31,30,31,31,30,31,30,31}};
    int y,m,d,dy;
    printf("input year,month and day:\n");
    scanf("%d%d%d",&y,&m,&d);
    dy=day_of_year(y,m,d,daytab[0]);
    printf("day of year is %d\n",dy);
    printf("input year,day of year:\n");
    scanf("%d%d",&y,&dy);
    month_day(y,dy,daytab,&m,&d);
    printf("%d,%d in %d",m,d,y);
}




