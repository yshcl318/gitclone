#include <stdio.h>
#include <stdlib.h>
void print_calendar(int,int);
void print_header(int,int);
void print_body(int,int);
int weekday(int,int,int);
int days_in_month(int,int);
int leapyear(int);
int main()
{
    int year,month;
    printf("��������ݺ��·�:");
    scanf("%d%d",&year,&month);
    print_calendar(year,month);
    return 0;
}
void print_calendar(int year,int month)
{
    int firstday,days;
    firstday=weekday(year,month,1);
    days=days_in_month(year,month);
    print_header(year,month);
    print_body(firstday,days);
}
int weekday(int year,int month,int day)
{
    int days=-1,i;
    for(i==1900;i<year;i++)
    {
        days+=365;
        if(leapyear(i))days+=1;
        days=days%7;
    }
    for(i=1;i<month;i++)
    {
        days+=days_in_month(year,i);
        days=days%7;
    }
    days=(days+day)%7;
    return days;
}
int days_in_month(int year,int month)
{
    int day;
    switch(month)
    {
        case 1:case 3:case 7:case 8:case 10:case 12:
            day=31;break;
        case 4:case 6:case 9:case 11:
            day=30;break;
        case 2:
            if(leapyear(year))day=29;
            else day=28;
    }
    return day;
}
void print_header(int year,int month)
{
    printf("\t%4d��%2d��\n\n",year,month);
    printf("�� һ �� �� �� �� ��\n");
}
void print_body(int firstday,int days)
{
    int i,weekday;
    for(i=0;i<firstday;i++)
        printf("   ");//�����ո�;
    weekday=firstday;
    for(i=1;i<=days;i++)
    {
        printf("%2d ",i);
        weekday+=1;
        if(weekday%7==0)
            printf("\n");
    }
}
int leapyear(int year)
{
    return (year%4==0&&year%100!=0||year%400==0);
}
