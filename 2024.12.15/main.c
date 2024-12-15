#include <stdio.h>
#include <stdlib.h>
int int_year(int a)
{
    if(a%4==0&&a%100!=0||a%400==0)
        return 1;
    else
        return 0;
}
void int_day(int year,int month,int day)
{
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31},sum=0;
    if(int_year(year))
    {
        days[1]=29;
    }
    for(int i=0;i<month-1;i++)
    {
        sum+=days[i];
    }
    sum+=day;
    printf("%d",sum);
}
int main()
{
    int year,month,day;
    char x,y;
    scanf("%d%c%d%c%d",&year,&x,&month,&y,&day);
    int_day(year,month,day);
    return 0;
}
