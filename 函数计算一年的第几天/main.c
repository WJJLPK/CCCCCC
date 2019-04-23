#include <stdio.h>
int  DayofYear(int year, int month, int day);
main()
{
    int year,month,day,a;
    printf("Please enter year, month, day:");
    scanf("%d,%d,%d",&year,&month,&day);
    a=DayofYear( year,  month,  day);
    printf("yearDay = %d\n",a);
}
int  DayofYear(int year, int month, int day)
{
    int s=0,i,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 if(year%4==0&&year%100!=0||year%400==0)
  a[2]=29;
 for(i=1;i<month;i++)
  s+=a[i];
 s=s+day;
 return s;
}

