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
        printf("ASCII��:%3d,�ַ�:%c\n",ch,ch);
    return 0;
}*/
#include<stdio.h>
int main()
{
    char c1,c2;
    printf("������һ����ĸ:");
    c1=getchar();getchar();
    printf("��������һ����ĸ:");
    c2=getchar();
    printf("��һ���ַ�:%c,ASCII��:%d\n",c1,c1);
    printf("�ڶ����ַ�:%c,ASCII��:%d\n",c2,c2);
    return 0;
}
