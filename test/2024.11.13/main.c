
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,x=0,y=0,z=0;
    for(a=1;a<=9;a++)
        for(b=1;b<=9;b++)
            for(c=1;c<=9;c++)
            {
                if(a!=b&&b!=c&&a!=c)
                {
                    x=a*100+b*10+c;
                    y=2*x;
                    z=3*x;
                    if(x<1000&&y<1000&&z<1000)
                    {
                        d=y/100;
                        e=y/10%10;
                        f=y%10;
                        g=z/100;
                        h=z/10%10;
                        i=z%10;
                        if(a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&a!=i&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&b!=i&&c!=d&&c!=e&&c!=f&&c!=g&&c!=h&&c!=i&&d!=e&&d!=f&&d!=g&&d!=h&&d!=i&&e!=f&&e!=g&&e!=h&&e!=i&&f!=g&&f!=h&&f!=i&&g!=h&&g!=i&&g!=i&&a!=0&&b!=0&&c!=0&&d!=0&&e!=0&&f!=0&&g!=0&&h!=0&&i!=0)
                        {
                            printf("%d %d %d\n",x,y,z);
                        }
                    }
                }
            }

    return 0;
}
/*#include<stdio.h>
#define N 5
#define S 30
int main()
{
    int i,j;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=S+N-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            putchar('A'+i-1);
        printf("\n");
    }
    return 0;
}*/
/*
#include<stdio.h>
#define n 6
#define s 30
int main()
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=s+i-1;j++)
            printf(" ");
        for(j=1;j<2*(n+1-i);j++)
            putchar('A'+j-1);
        printf("\n");
    }
}*/
/*
#include<stdio.h>
int main()
{
    int i=0,j=0,n=0,k=0,l=0;
    scanf("%d",&n);
    l=n-1;
    for(i=0;i<n;i++)
    {
        for(j=n-i-2;j>=0;j--)
            printf(" ");
        for(k=0;k<n-l;k++)
            printf("*");
        printf("\n");
        l--;
    }
    return 0;
}*/
