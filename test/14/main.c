/*int my_sizeof(char*str)
{
    int count=0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}
#include<stdio.h>
int main()
{
    char arr[]="abc";
    size_t len=my_sizeof(arr);
    printf("%zd\n",len);
    return 0;
}*/
/*int my_sizeof(char*str)
{
    if(*str=='\0')
        return 0;
    else
        return 1+my_sizeof(str+1);
}
#include<stdio.h>
int main()
{
    char arr[]="abc";
    size_t len=my_sizeof(arr);
    printf("%zd\n",len);
    return 0;
}*/
/*int Fac(int a)
{
    if(a<=1)
        return 1;
    else
        return a*Fac(a-1);
}
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=Fac(a);
    printf("%d\n",b);
    return 0;
}*/
/*int Fac(int a)
{
    int i=1,s=1;
    for(i=1;i<=a;i++)
        s*=i;
    return s;
}
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=Fac(a);
    printf("%d\n",b);
    return 0;
}*/
/*int g(int a)
{
    if(a<=2)
        return 1;
    else
        return g(a-1)+g(a-2);
}
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=g(a);
    printf("%d\n",b);
    return 0;
}*/
/*int g(int a)
{
    int b=1,c=1,d=1,i;
    while(a>=3)
    {
        d=b+c;
        b=c;
        c=d;
        a--;
    }
    return d;
}
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=g(a);
    printf("%d\n",b);
    return 0;
}*/
/*int g(int a)
{
    int b=1,c=1,d=1,i=3;
    if(a<=2)
        return 1;
    else
    {
        while(i<=a)
        {
            i++;
            d=b+c;
            b=c;
            c=d;
        }
        return d;
    }
}
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int s=g(a);
    printf("%d\n",s);
    return 0;
}*/
int g(int a)
{
    int b=1,c=1,d=1,i=3;
    if(a<=2)
        return 1;
    else
    {
        for(i=3;i<=a;i++)
        {
            d=b+c;
            b=c;
            c=d;
        }
        return d;
    }
}
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int s=g(a);
    printf("%d\n",s);
    return 0;
}

