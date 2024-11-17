#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a=0,b=0,n=0,i=0,j=0,k=0,g=0,d;
    long s[100]={0},c=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        k=0;
        c=0;
        scanf("%d %d",&a,&b);
        for(j=0;a>0;j++)
        {
            s[j]=a%10;
            a=a/10;
        }
        if(s[0]==0)
            for(k=0;s[k]==0;k++);
        g=j-1;
        for(d=k;d<j;d++,g--)
        {
            t=pow(10,g);
            t=t*s[d];
            c+=t;
        }
        c=c*b;
        printf("%ld\n",c);
    }
    return 0;
}
