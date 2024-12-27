#include<stdio.h>
int main()
{
    int n,k,s=1,t,sum=0;
    scanf("%d %d",&n,&k);
    t=n;
    sum=n;
    while(s>0)
    {
        s=t/k;
        t=n%k+s;
        sum+=s;
    }
    printf("%d",sum);
    return 0;
}
