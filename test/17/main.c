/*int q(int i)
{
    if(i<=1)
        return 1;
    else
        return i*q(i-1);
}
int w(int i)
{
    if (i<=1)
        return 3;
    else
        return (2*i+1)*w(i-1);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n;
    float s=1,a,b;
    scanf("%d",&n);
    while(i<n)
    {
        i++;
        a=q(i);
        b=w(i);
        s=s+a/b;
        printf("%0.3f ",a);
        printf("%0.3f \n",b);
    }
    printf("%0.3f",s);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0;
    char ch[100];
    fgets(ch,100,stdin);
    for(int i=0;i<=100;i++)
    {
        if(ch[i]=='>'&&ch[i+1]!='=')
        {
            a++;
        }
        else if(ch[i]=='<'&&ch[i+1]!='=')
        {
            b++;
        }
        else if(ch[i]=='>'&&ch[i+1]=='=')
        {
            i++;
            c++;
        }
        else if(ch[i]=='<'&&ch[i+1]=='=')
        {
            i++;
            d++;
        }
        else if(ch[i]=='='&&ch[i+1]=='=')
        {
            i++;
            e++;
        }
        else if(ch[i]=='!'&&ch[i+1]=='=')
        {
            i++;
            f++;
        }
    }
    printf("%d %d %d %d %d %d ",a,b,c,d,e,f);
    return 0;
}
