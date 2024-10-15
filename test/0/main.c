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
#include<stdio.h>
int main()
{
    char c1,c2;
    printf("请输入一个字母:");
    c1=getchar();getchar();
    printf("请再输入一个字母:");
    c2=getchar();
    printf("第一个字符:%c,ASCII码:%d\n",c1,c1);
    printf("第而个字符:%c,ASCII码:%d\n",c2,c2);
    return 0;
}
