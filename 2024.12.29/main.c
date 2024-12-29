#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    long long a,n,sum=0;
    scanf("%lld %lld",&a,&n);
    int i;
    sum=a;
    int s=a;
    for(i=1;i<n;i++)
    {
        a=s+a*10;
        sum+=a;
    }
    printf("%lld",sum);
    return 0;
}
