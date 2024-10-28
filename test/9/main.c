/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    for(x=1;x<5;x+=2)
    {
        for(y=1;y<5;y++)
            printf("%3d",x*y);
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
#define M 50
#define R 0.005
int main()
{
    int i;
    float sum1,sum2;
    for(i=0;i<12;i++)
    {
        sum1=sum1+M;
        sum2=sum2+sum1*R;
    }
    printf("sum1=%.2f sum2=%.2f sum1+sum2=%.2f",sum1,sum2,sum1+sum2);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int x,y=7,a,b;
    scanf("%d",&x);
    a=x/y;
    b=x%y;
    printf("%dÖÜ%dÌì",a,b);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    printf("%d%d",c,b);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=0;
        b=a%10;
        a=a/10;
        printf("%d",b);
    }
    printf("\n");
    return 0;
}*/
