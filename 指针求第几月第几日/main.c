#include <stdio.h>
#include <stdlib.h>

void MonthDay(int year, int yearDay, int *pMonth, int *pDay);

int main()
{
    int year,yearDay,pMonth,pDay;
    scanf("%d",&year);
    scanf("%d",&yearDay);
    MonthDay(year,yearDay,&pMonth,&pDay);
    printf("%d %d",pMonth,pDay);
    return 0;
}

void MonthDay(int year, int yearDay, int *pMonth, int *pDay)
{
    int day[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
                    {31,29,31,30,31,30,31,31,30,31,30,31}};
    int flag = 0,i=0;
    if(((year%4==0)&&(year%100)!=0)||(year%400==0))
        flag = 1;

    if (flag == 0&&yearDay>365)
    {
        printf("天数输入不合法\n");
        exit(0);
    }
    else if (flag == 1&&yearDay>366)
    {
        printf("天数输入不合法\n");
        exit(0);
    }

    while(yearDay>day[flag][i])
    {
        yearDay-=day[flag][i];
        i++;
    }
    *pMonth = i+1;
    *pDay = yearDay;
}
