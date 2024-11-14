/*#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);

    if(x<-5)
        y=-3*x+10;
    else if(x>=-5 && x<0)
        y=x;
    else if(x==0)
        y=0;
    else if(x>0 && x<=5)
        y=2*x;
    else
        y=4*x-10;

    printf("%d",y);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int m,n,p=1;
    printf("请输入两个正整数:");
    scanf("%d%d",&m,&n);
    while(p!=0)
    {
        p=m%n;
        m=n;
        n=p;
    }
    printf("最大公约数:%d\n",m);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int m,n,p,loop=1;
    printf("请输入两个正整数:");
    scanf("%d%d",&m,&n);
    while(loop)
    {
        p=m%n;
        if(p==0)loop=0;
        else
            m=n,
            n=p;
    }
    printf("最大公约数:%d\n",n);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char c;
    int word=0,lastchar=1;
    printf("请输入一串字符:\n");
    while((c=getchar())!='\n')
    {
        if(c==' ')
            lastchar=1;
        else
        {
            if(lastchar)
            {
                word++;
                lastchar=0;
            }
        }
    }
    printf("该行字符中共有%d个单词.\n",word);
    return 0;
}*/
#include<stdio.h>
int main()
{
    char str[81];
    int i=0,word=0;
    printf("请输入一串字符:\n");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
            for(i++;str[i]==' ';i++);
        else
        {
            word++;
            for(i++;str[i]!=' '&&str[i]!='\0';i++);
        }
    }
     printf("该行字符中共有%d个单词.\n",word);
    return 0;
}

