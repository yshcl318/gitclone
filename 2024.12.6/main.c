/*#include<stdio.h>
int main()
{
    int n,sum=1,s=1;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        sum+=i;
        s=s+sum;
    }
    printf("%d",s);
    return 0;
}*/
/*#include<stdio.h>
int  main()
{
    int n,s=0;
    scanf("%d",&n);
    for(int i=37;i<n;i++)
    {
        if(i%37==0)
            s+=i;
    }
    printf("%d",s);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n,k,i=0,a[100];
    float b[100];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d %f",&a[i],&b[i]);
    }
    printf("%d %g",a[k],b[k]);
    return 0;
}
