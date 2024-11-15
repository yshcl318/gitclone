/*#include<stdio.h>
int main()
{
    int a,b,sum=0,p=0,i;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
            sum+=i;
    }
    b=sum;
    for(i=1;i<b;i++)
    {
        if(b%i==0)
            p+=i;
    }
    if(p==a)
    {
        printf("%d",b);
    }
    else if(p!=a)
    {
        printf("%d",-1);
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,b,i;
    while(scanf("%d",&a))
    {
        for(i=0;a>0;i++)
        {
            b=a%10;
            a=a/10;
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a=0,i,b;
    scanf("%d",&a);
    for(i=0;a>0;i++)
    {
        b=a%10;
        a=a/10;
        if(i==0&&b==0)
        {
            for(i=1;b==0;i++)
            {
                b=a%10;
                a=a/10;
            }
        }
        printf("%d",b);
    }

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    long long a;
    int j=0,i=0,b[100]={0};
    scanf("%lld",&a);
    for(i=1;a>0;i++)
    {
        b[i]=a%10;
        a=a/10;
    }
    j=i;

    if(i==1)
    {
        printf("%d %d",b[1],b[1]);
    }
    else
    {
        for(j=i;j>=0;j=j-2)
    {
        if(b[i]==0)
        {
            for(j;b[j]==0&&j>=0;j-=2);
        }
        printf("%d",b[j]);
    }
    printf(" ");
    for(j=i-1;j>0;j=j-2)
    {

        if(b[i-1]==0)
        {
            for(j;b[j-1]==0&&j>=0;j-=2);

        }
        printf("%d",b[j]);
    }
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,b[4],i=0,j=0,s=0,p=0,sum=0;
    scanf("%d",&a);
    while(1)
    {
        for(i=0;a>0;i++)
    {
        b[i]=a%10;
        a=a/10;
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(b[j]>b[j+1])
            {
                int temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    s=b[0]+10*b[1]+100*b[2]+1000*b[3];
    p=b[3]+b[2]*10+b[1]*100+b[0]*1000;
    sum=s-p;
    if(b[0]==0)
        printf("%d-0%d=%d\n",s,p,sum);
    else
        printf("%d-%d=%d\n",s,p,sum);
    if(sum==6174)
        break;
    else
    {
        a=sum;
    }
    }
    return 0;
}*/
/*double loop(double x)
{
    return pow(x,5)-2*pow(x,4)+pow(x,2)-3;
}
#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,z,s,a=0,b=2;
    scanf("%lf",&z);
    do
    {
        x=(a+b)/2;
        y=loop(x);
        s=fabs(y);
        if(s<z)
        {
            printf("%.8lf",x);
        }
        else
        {
            if(y*loop(a)>0)
            a=x;
            else
            b=x;
        }
    }while(s>=z);
    return 0;
}*/
/*#include<stdio.h>
#include<math.h>

double loop(double x) // 将返回值类型改为double
{
    return pow(x,5) - 2 * pow(x,4) + pow(x,2) - 3;
}

int main()
{
    double x, y, z, s, a = 0, b = 2;
    scanf("%lf", &z); // 读取double类型的ε值
    do
    {
        x = (a + b) / 2;
        y = loop(x);
        s = fabs(y); // 使用fabs函数来获取绝对值
        if(s < z) // 当|f(x)| < ε时，认为找到了近似根
        {
            printf("%.8lf\n", x); // 保留8位小数并换行
            break; // 找到根后退出循环
        }
        else
        {
            if(y * loop(a) > 0)
                a = x;
            else
                b = x;
        }
    } while(s >= z); // 循环条件改为s >= z
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int N,a;
    long long j,i,k,h,s;
    scanf("%d",&N);
    for(i=N+1;;i++)
    {
        j=i*i;
        k=i;
        for(a=0;k>0;a++)
        {
            k=k/10;
        }
        s=pow(10,a);
        h=j%s;
        if(h==i)
        {
            printf("%lld",i);
            break;
        }
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a,b,c,d;
    char o,p,q;
    while(scanf("%d %c %d %c %d %c %d",&a,&p,&b,&o,&c,&q,&d)==7)
    {
        if(o=='+')
        {
            int s=a/b+c/d;
            printf("%d",s);
        }
    }
}
