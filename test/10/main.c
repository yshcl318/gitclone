/*#include <stdio.h>
#include <stdlib.h>
void add(int*p)
{
    *p=*p+1;
}
int main()
{
    int num=0;
    add(&num);
    printf("%d",num);
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    printf("%d",printf("%d",printf("%d",43)));
    return 0;
}*/
/*#include <stdio.h>
void print(int n)
{
    if(n>9)
        print(n/10);
    printf("%d ",n%10);
}
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}*/
int my_sizeof(char*str)
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
}
