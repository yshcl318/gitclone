/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
        if(i<9)
            printf(",");
    }
    printf("\n");
    for(i=0;i<=9-i;i++)
    {
        int t=arr[i];
        arr[i]=arr[9-i];
        arr[9-i]=t;
    }
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
        if(i<9)
            printf(",");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int s[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<=9-i;i++)
    {
        int t=s[i];
        s[i]=s[i+5];
        s[i+5]=t;
    }
    for(i=0;i<10;i++)
    {
        printf("%d",s[i]);
        if(i<9)
            printf(",");
    }
    return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int s[20],i,sum=0,j=0;
    float aver=0;
    for(i=0;i<20;i++)
    {
        scanf("%d",&s[i]);
        sum+=s[i];
    }
    aver=sum/20.000;
    printf("所有评委平均分:%.3f分.\n",aver);
    printf("不合格得分:");
    for(i=0;i<20;i++)
    {
        if(fabsf(aver-s[i])>10)
        {
            printf("%d ",s[i]);
            sum-=s[i];
            j++;
        }
    }
    printf(".\n");
    if(j==20)
        printf("无合格打分.\n");
    else
        printf("最后得分:%.3f分.",1.000*sum/(20-j));
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n,i,j,x=0,y=0;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)x+=arr[i][j];
            if(i>=j)y+=arr[i][j];
        }
    }
    printf("%d %d",x,y);
    return 0;
}
