/*#include <stdio.h>
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
    printf("请输入年份和月份:");
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
    printf("\t%4d年%2d月\n\n",year,month);
    printf("日 一 二 三 四 五 六\n");
}
void print_body(int firstday,int days)
{
    int i,weekday;
    for(i=0;i<firstday;i++)
        printf("   ");//三个空格;
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
}*/
#include<stdio.h>
double get_operand()
{
    double val;
    scanf("%lf", &val);
    return val;
}
char get_operator()
{
    char c = getchar();
    return c;
}
int prior(char op1, char op2)
{
    int flag;
    if (op1 == '*' || op2 == '/')
        if (op2 == '+' || op2 == '-')
            flag = 1;
        else
            flag = 0;
    else
        if (op2 == '+' || op2 == '-')
            flag = 0;
        else
            flag = -1;
    return flag;
}
double evaluate(double left, char op, double right)
{
    double result;
    switch (op)
    {
    case'+':result = left + right; break;
    case'-':result = left - right; break;
    case'*':result = left * right; break;
    case'/':
        if (right != 0)
        {
            result = left / right; break;
        }
        else
        {
            printf("非法运算！");
            exit(1);
        }
    }
}
int main()
{
    double value1, value2, value3, result;
    char op1, op2;
    printf("输入四则运算表达式:\n");
    value1 = get_operand();
    op1 = get_operator();
    if (op1 == '\n')
        result = value1;
    else
    {
        value2 = get_operand();
        while ((op2 = get_operator()) != '\n')
        {
            value3 = get_operand();
            if (prior(op2, op1) > 0)
                value2 = evaluate(value2, op1, value3);
            else
            {
                value1 = evaluate(value1, op1, value2);
                op1 = op2;
                value2 = value3;
            }
        }
        result = evaluate(value1, op1, value2);
    }
    printf("结果为:%lf\n", result);
    return 0;
}
