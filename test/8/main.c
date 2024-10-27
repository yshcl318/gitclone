/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0xDEF;
    printf("%4d,%4o,%4x\n",x,x,x);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int x=015,y=0x15;
    printf("%4o%4x\n",x,y);
    printf("%4x%4d\n",x,y);
    printf("%4d%4o\n",x,y);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char c1='a',c2='b',c3='c',c4='\101',c5='\116';
    printf("abc\tde\bh\rA\tg\n");
    printf("a%cb%c\tc%c\tabc\n",c1,c2,c3);
    printf("\t\b%c%c",c4,c5);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a=123;
    float b=456.78;
    double c=-123.45678;
    printf("%.3f %.3e %f\n",b,b,c);
    printf("%8.3f %8.3e %g\n",b,b,c);
    printf("%u %-10.3f %-10.3e\n",a,b,c);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int x;
    float y;
    char z;
    scanf("%3d%f%3c",&x,&y,&z);
    printf("%3d %f %3c",x,y,z);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int x=5,y;
    y=x++*x++;
    y=--y*--y;
    printf("%d",y);
    return 0;
}*/
/*int a(int x,int y)
{
    if(x<y)
        return x;
    else
        return y;
}
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    x=a(x,y);
    printf("%d\n",x);
    return 0;
}*/
/*int a(int x)
{
    if(((x%4==0)&&(x%100!=0))||(x%400==0))
        return 0;
    else
        return 1;
}
#include<stdio.h>
int main()
{
    int i=1000,sum=0;
    for(i=1000;i<=2000;i++)
    {
        if(a(i)!=1)
        {
            printf("%d ",i);
            sum++;
        }
    }
    printf("%d\n",sum);
    return 0;
}*/
int a(int x[],int y,int z)
{
    int left=0,right=z-1,mid=(left+right)/2;
    while(left<=right)
    {
        if(x[mid]<y)
            mid=left+1;
        else if(x[mid>y])
            mid=right-1;
        else
            return mid;
    }
    return -1;
}
#include<stdio.h>
int main()
{
    int x[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int y,z;
    scanf("%d",&y);
    z=sizeof(x)/sizeof(x[0]);
    int ret=a(x,y,z);
    if(ret==-1)
        printf("’“≤ªµΩ\n");
    else
        printf("%d\n",ret);
    return 0;
}
