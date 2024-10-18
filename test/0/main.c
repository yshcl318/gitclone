/*include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    unsigned char ch;
    for (ch=32;ch<=127;ch++)
        printf("ASCII码:%3d,字符:%c\n",ch,ch);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char c1,c2;
    printf("请输入一个字母:");
    c1=getchar();getchar();
    printf("请再输入一个字母:");
    c2=getchar();
    printf("第一个字符:%c,ASCII码:%d\n",c1,c1);
    printf("第二个字符:%c,ASCII码:%d\n",c2,c2);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,i=1,sum=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum=sum*i;
    }
    printf("%d\n",sum);
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
/*#include<stdio.h>
int main()
{
    int a,i=1,sum=1,c=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum=sum*i;
        c=c+sum;
    }
    printf("%d\n",c);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char name[10]="john";
    printf("%s\n",name);
    char a[6]={'j','o','h','n'};
    printf("%s\n",a);
    return 0;
}*/
