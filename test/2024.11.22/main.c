/*#include <stdio.h>
int is_triangle(int, int, int);
int main() {
	int n, a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	n = is_triangle(a, b, c);
	switch (n) {
	case 0:
		printf("regular triangle!");
		break;
	case 1:
		printf("equilateral triangle!");
		break;
	case 2:
		printf("isosceles triangle!");
		break;
	case 3:
		printf("not a triangle!");
		break;

	}

}
int is_triangle(int a, int b, int c) {
	if(a+b>c&&a+c>b&&c+b>a)
    {
        if(a==b&a==c)
        return 1;
        else if(a==b||a==c)
        return 2;
        else
        return 0;
    }
    else
    return 3;

}*/
/*#include <stdio.h>
#include <time.h>
#include<stdlib.h>
int main()
{
    srand((unsigned int)time(NULL));
    int a=rand();
    if(a%2==0)
    {
        printf("Dice is: %d\n",a);
        printf("win");
    }
    else
    {
        printf("Dice is: %d\n",a);
        printf("lose");
    }
	return 0;
} */
/*#include <stdio.h>
#include <math.h>
int judgePrime(int);
int main()
{
	int n;
	while (scanf("%d", &n) != EOF) { //多组数据输入的基本框架
		printf(judgePrime(n) ? "yes\n" : "no\n"); // 用条件表达式使表述更为精炼
	}
	return 0;
}

int judgePrime(int n) { //函数完成判断一个数是否为素数
    int j=0;
    if(n<=1)
    return 0;
    else
    {
        for(int i=2;i<n/2;i++)
        {
            if(n%i==0)
                j++;
        }
        if(j==0)
            return 1;
        else
            return 0;
    }
}*/
/*#include<stdio.h>
//编写题目要求的函数

double q(double i)
{
    if(i==0)
    return 1;
    else
    return i*q(i-1);
}
double p(double i)
{
    if(i==0)
    return 1;
    else
    return (2*i+1)*p(i-1);
}

int main(void)
{
    int n;
    double s=0;
    scanf("%d",&n);
    for (int i=0;i<=n;i++)
    {
        s+=q(i)/p(i);
    }
    printf("%0.10lf",s);
    return 0;
}*/

/*#include<stdio.h>
void solve(){

    int max=0,min=0;
    for(int i=2;i<=3000;i++)
    {
        int b=0,a=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
                b+=j;
        }
        if(b!=i)
        {
            for(int k=1;k<b;k++)
            {
                if(b%k==0)
                    a+=k;
            }
            if(a==i)
            {
                if(a==max||a==min)continue;
                max=b>i?b:i;
                min=b<i?b:i;
                printf("(%d,%d)",min,max);
            }
        }
    }
}
int main(void)
{
    solve();
    return 0;
}*/
/*#include<stdio.h>
//编写最大公约数GCD函数
long long int DCD(long long int a,long long int b)
{
    long long int max=a>b?a:b;
    long long int min=a<b?a:b;
    while(min!=0)
    {
        long long int r=max%min;
        max=min;
        min=r;
    }
    return max;
}


//编写最小公倍数LCM函数

long long int LCM(long long int a,long long int b,long long int c)
{
    a=a/c;
    b=b/c;
    return a*b*c;
}

int main(void)
{
    long long int a,b,max=0,min=0;
    scanf("%lld%lld",&a,&b);
    if(a<0||b<0)
        printf("Input Error");
    else
    {
        max=DCD(a,b);
        min=LCM(a,b,max);
    }
    printf("%lld %lld",max,min);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int j=0,h=0;
        scanf("%d",&m);
        if(m==1)
            printf("2 1\n");
        else
        {
            for(j=m;j>0;j--)
        {
            int a=0;
            for(int k=2;k<j/2;k++)
                if(j%k==0)
                    a++;
            if(a==0)break;
        }
        for(h=m;;h++)
        {
            int b=0;
            for(int k=2;k<h/2;k++)
                if(h%k==0)
                    b++;
            if(b==0)break;
        }
        if(j==m)
            printf("%d %d\n",m,0);
        else
        {
            int right=0,left=0;
            right=h-m;
            left=m-j;
            if(right==left)
                printf("%d %d\n",j,left);
            else if(right<left)
                printf("%d %d\n",h,right);
            else
                printf("%d %d\n",j,left);
        }
        }
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int arr[4]={0},j=0,a,b,c=0,d=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        int k=i,x=0,y=0;
        while(k>0)
        {
            arr[j]=k%2;
            k/=2;
            if(arr[j]==0)
                x++;
            else if(arr[j]==1)
                y++;
        }
        if(x<y)
            c++;
        else
            d++;
    }
    printf("%d %d",c,d);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a%4==0&&a%100!=0)||a%400==0)
        {
            if(b>0&&b<=12)
            {
                if(b==2)
            {
                if(c>0&&c<=29)
                    printf("YES");
                else
                    printf("NO");
            }
            else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
            {
                if(c>0&&c<=31)
                    printf("YES");
                else
                    printf("NO");
            }
            else if(b==4||b==6||b==9||b==11)
            {
                if(c>0&&c<=30)
                    printf("YES");
                else
                    printf("NO");

            }
            }
            else
                printf("NO");
        }
    else
        {
            if(b>0&&b<=12)
            {
                if(b==2)
            {
                if(c>0&&c<=28)
                    printf("YES");
                else
                    printf("NO");
            }
            else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
            {
                if(c>0&&c<=31)
                    printf("YES");
                else
                    printf("NO");
            }
            else if(b==4||b==6||b==9||b==11)
            {
                if(c>0&&c<=30)
                    printf("YES");
                else
                    printf("NO");

            }
            }
            else
                printf("NO");
        }
        return 0;
}*/
/*#include<stdio.h>
int main()
{
    int x,y,n,a,b,c;
    scanf("%d",&x);
    c=x%100;
    b=x/100%100;
    a=x/10000;
    n=x;
    if((a%4==0&&a%100!=0)||a%400==0)
        {
            if(b>0&&b<=12)
            {
                if(b==2)
            {
                if(c>0&&c<=29)
                    {
                        while(n>0)
                        {
                            y=y*10+n%10;
                            n=n/10;
                        }
                        if(y==x)
                            printf("YES\n");
                        else
                            printf("NO\n");
                    }
                else
                    printf("NO");
            }
            else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
            {
                if(c>0&&c<=31)
                    {
                        while(n>0)
                        {
                            y=y*10+n%10;
                            n=n/10;
                        }
                        if(y==x)
                            printf("YES\n");
                        else
                            printf("NO\n");
                    }
                else
                    printf("NO");
            }
            else if(b==4||b==6||b==9||b==11)
            {
                if(c>0&&c<=30)
                    {
                        while(n>0)
                        {
                            y=y*10+n%10;
                            n=n/10;
                        }
                        if(y==x)
                            printf("YES\n");
                        else
                            printf("NO\n");
                    }
                else
                    printf("NO");

            }
            }
            else
                printf("NO");
        }
    else
        {
            if(b>0&&b<=12)
            {
                if(b==2)
            {
                if(c>0&&c<=28)
                    {
                        while(n>0)
                        {
                            y=y*10+n%10;
                            n=n/10;
                        }
                        if(y==x)
                            printf("YES\n");
                        else
                            printf("NO\n");
                    }
                else
                    printf("NO");
            }
            else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
            {
                if(c>0&&c<=31)
                    {
                        while(n>0)
                        {
                            y=y*10+n%10;
                            n=n/10;
                        }
                        if(y==x)
                            printf("YES\n");
                        else
                            printf("NO\n");
                    }
                else
                    printf("NO");
            }
            else if(b==4||b==6||b==9||b==11)
            {
                if(c>0&&c<=30)
                    {
                        while(n>0)
                        {
                            y=y*10+n%10;
                            n=n/10;
                        }
                        if(y==x)
                            printf("YES\n");
                        else
                            printf("NO\n");
                    }
                else
                    printf("NO");

            }
            }
            else
                printf("NO");
        }
        return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,b,c,d,e,s;
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if((a%4==0&&a%100!=0)||a%400==0)
    {
        if(d>b)
        {
            if(b>2)
            {
                for(b;b<d;b++)
                    s+=days[b-1];
                s=s+e-c;
                printf("%d",s);
            }
            else
            {
                for(b;b<d;b++)
                    s+=days[b-1];
                s=s+e-c+1;
                printf("%d",s);
            }
        }
        else
        {
            if(d>2)
            {
                for(d;d<b;d++)
                    s+=days[d-1];
                s=-s+e-c+1;
                printf("%d",s);
            }
            else
            {
                for(d;d<b;d++)
                    s+=days[d-1];
                s=-s+e-c+1;
                printf("%d",s);
            }
        }
    }
    else
    {
         if(d>b)
        {
            for(b;b<d;b++)
                s+=days[b-1];
            s=s+e-c;
            printf("%d",s);
        }
        else
        {
            for(d;d<b;d++)
                s+=days[d-1];
            s=-s+e-c;
            printf("%d",s);
        }
    }
    return 0;
}
*/
/*#include <stdio.h>

// 函数用于判断是否为闰年
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 函数用于计算月份的天数
int getMonthDays(int year, int month) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysInMonth[month - 1];
}

// 函数用于计算两个日期之间相差的天数
int calculateDays(int year1, int month1, int day1, int year2, int month2, int day2) {
    int days = 0;

    // 计算年份差
    if (year1 != year2) {
        int years = year2 - year1;
        days += (years - 1) * 365;
        days += isLeapYear(year1) ? 1 : 0;
        days += isLeapYear(year2) ? 1 : 0;
        days += getMonthDays(year1, month1);
        days += (12 - month2) * 31; // 简化计算，假设每个月31天
    }

    // 计算月份差
    if (year1 == year2 && month1 != month2) {
        days += (month2 - month1) * 30; // 简化计算，假设每个月30天
        days += getMonthDays(year1, month1);
    }

    // 计算日期差
    days += day2 - day1;

    return days;
}

int main() {
    int year1, month1, day1, year2, month2, day2;
    printf("Enter the first date (Y M1 D1): ");
    scanf("%d %d %d", &year1, &month1, &day1);
    printf("Enter the second date (Y M2 D2): ");
    scanf("%d %d %d", &year2, &month2, &day2);

    int days = calculateDays(year1, month1, day1, year2, month2, day2);
    printf("The difference between the two dates is %d days.\n", days);

    return 0;
}*/
#include<stdio.h>
int main()
{
    int a,b,j=0;
    scanf("%d %d",&a,&b);
    for(int i=a+1;j<5;i++)
    {
        int x=0,y=0;
        for(int k=2;k<i/2;k++)
            if(i%k==0)
                x++;
        if(x==0)
        {
            int g=i+2;
            for(int k=2;k<g/2;k++)
                if(g%k==0)
                    y++;
            if(y==0)
            {
                printf("%d %d\n",i,g);
                j++;
            }
        }
    }
    return 0;
}
