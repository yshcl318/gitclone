/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    while(scanf("%d",&a)==1)
    {
        int x=s(a);
        printf("%d",x);
    }
    return 0;
}
int s(int a)
{
    if(a<=1)
        return 1;
    else
        return a*s(a-1);
}*/
#include<stdio.h>
int main()
{
    int i;
    long long x=0;
    scanf("%d",&i);
    for(int j=1;j<=i;j++)
    {
        x=x+s(j);
    }
    printf("%d",x);
    return 0;
}
int s(long long a)
{
    if(a<=1)
        return 1;
    else
        return a*s(a-1);
}
/*#include<stdio.h>
int main()
{
    int a,b,j=0;
    while(scanf("%d %d",&a,&b)==2)
    {
        for(int i=1;i<10000;i++)
        {
            if(b%i==0&&i%a==0)
            {
                j++;
            }
        }
        printf("%d",j);
    }
    return 0;
}*/
