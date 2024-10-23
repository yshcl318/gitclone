/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch[100];
    fgets(ch,100,stdin);
    if(ch[0]!='\n')
    {
        printf("%s\n",ch);
    }
    else
    {
        printf("ÄãÊäÈëµÄÊÇ¿Õ´®\n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    char c;
    c=getchar();
    while(c!='\0')
    {
        c=c-('a'-'A');
        putchar(c);
        c=getchar();
    }
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100]={'0'};
    int i=0;
    fgets(ch,100,stdin);
    for(i=0;ch[i] !='\0';i++)
    printf("%c\n",ch[i]);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char a[100];
    int i=0;
    gets(a);
    a[0]=a[0]-32;
    for(i=1;i<100;i++)
    {
    if(i>=1&&a[i]>='A'&&a[i]<='Z')
    {
        a[i]=a[i]+32;

    }
    }
    printf("%s\n",a);
    return 0;

}*/
