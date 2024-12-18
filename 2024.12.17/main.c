/*#include<stdio.h>
int main()
{
    int i=0,n=0,a=0,b=0,c=0;
    char num[100];
    while(getchar()!=']')
    {
        scanf("%d",&num[n]);
        n++;
    }
    for(i=0;i<n;i++)
    {
        a=b=0;
        for(int j=0;j<n;j++)
        {
            if (num[i]<num[j])
                a++;
            else if(num[i]>num[j])
                b++;
            if(a>=1&&b>=1)
            {
                c++;
                break;
            }
        }
    }
    printf("%d",c);
    return 0;
}*/
//#include<stdio.h>
//int main()
//{
    // 请在此添加您的代码
/*    /********** Begin *********/
/*        int n=0,i=0;
        scanf("%d",&n);
        for(i=10000;i>=n;i--)
        {
            if(i%n==0)
            {
                printf("%d",i);
                break;
            }
        }
    /********** End *********/
//    return 0;
//}

#include<stdio.h>
int main()
{
    int n,i=0,m,j=0;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
        scanf("%d ",&num[i]);
    scanf("%d",&m);
    for(i=0;i<n;i++)
        if(num[i]==m)
            j++;
    printf("%d",j);
    return 0;
}
