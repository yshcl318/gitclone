/*#include <stdio.h>
#include <stdlib.h>
#define N 6
int main()
{
    int yf[N+1],j,i;
    yf[1]=1;
    printf("%5d\n",yf[1]);
    for(i=2;i<=N;i++)
    {
        yf[i]=1;
        for(j=i-1;j>=2;j--)
            yf[j]=yf[j]+yf[j-1];
        for(j=1;j<=i;j++)
                printf("%5d",yf[j]);
            printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        printf("    ");
        for(j=1;j<=i;j++)
            printf("%d*%d=%2d  ",i,j,i*j);
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,k=2;
    printf("请输入一个大于或等于二的整数:\n");
    scanf("%d",&n);
    printf("质因子分解结果为:%d=",n);
    while(1)
    {
        if(n%k==0)
        {
            n/=k;
            if(n>1)
                printf("%d*",k);
            else
            {
                printf("%d\n",k);
                break;
            }
        }
        else
            k++;
    }
    return 0;
}
*/
/*#include<stdio.h>
#define N 10
int main()
{
    int data[N+1],i,j,post,t;
    printf("请输入%d个整数:\n",N);
    for(i=1;i<=N;i++)
        scanf("%d",&data[i]);
    for(i=1;i<=N-1;i++)
    {
        post=i;
        for(j=i+1;j<=N;j++)
            if(data[j]>data[post])
            post=j;
        if(post!=i)
        {
            t=data[i];
            data[i]=data[post];
            data[post]=t;
        }
    }
    printf("降序后的结果为:\n");
    for(i=1;i<=N;i++)
        printf("%d ",data[i]);
    printf("\n");
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i,num,n;
    int count[10]={0};
    printf("请输入一个正整数:");
    scanf("%d",&num);
    n=num;
    do
    {
        count[n%10]++;
        n/=10;
    }while(n!=0);
    for (i=0;i<10;i++)
        if(count[i]>1)
            break;
    if(i<10)
        printf("整数%d中存在重复数字.\n",num);
    else
        printf("整数%d中没有重复数字.\n",num);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    for(a=1;a<=5;a++)
    {
        for(b=2;b<=5;b++)
        {
            if(b==a)continue;
            for(c=1;c<=5;c++)
            {
                if(c==b||c==a)continue;
                if((c<=2)!=(a==5))continue;
                for(d=1;d<=5;d++)
                {
                    if(d==a||d==b||d==c)continue;
                    if((d<=2)!=(c!=1))continue;
                    e=15-a-b-c-d;
                    if((e!=2&&e!=3)&&((a<=2)==(e==1))&&((e<=2)==(d==1))&&((e==1)+(b==2)+(a==5)+(c!=1)+(d==1)==2))
                        printf("A=%d,B=%d,C=%d,D=%d,E=%d\n",a,b,c,d,e);
                }
            }
        }
    }
    return 0;
}
