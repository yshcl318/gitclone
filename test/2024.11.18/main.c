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
#include<stdio.h>
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
}
