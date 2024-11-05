int q(int i)
{
    if(i<=1)
        return 1;
    else
        return i*q(i-1);
}
int w(int i)
{
    if (i<=1)
        return 3;
    else
        return (2*i+1)*w(i-1);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n;
    float s=1,a,b;
    scanf("%d",&n);
    while(i<n)
    {
        i++;
        a=q(i);
        b=w(i);
        s=s+a/b;
        printf("%0.3f ",a);
        printf("%0.3f \n",b);
    }
    printf("%0.3f",s);
    return 0;
}
