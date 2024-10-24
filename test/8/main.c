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
#include<stdio.h>
int main()
{
    int x;
    float y;
    char z;
    scanf("%3d%f%3c",&x,&y,&z);
    printf("%3d %f %3c",x,y,z);
    return 0;
}
