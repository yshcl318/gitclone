/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100],max;
    int i=0;
    fgets(a,100,stdin);
    max=a[0];
    for (i=0;a[i]!='\0';i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("%d\n",max);
    return 0;

}*/
/*#include<stdio.h>
int main()
{
    char ch[100];
    int i=0,a=0,b=0;
    fgets(ch,100,stdin);
    for(i=0;ch[i]!='\n';i++)
    {
        if(ch[i]>='A'&&ch[i]<='Z')
            a++;
        else if(ch[i]>='a'&&ch[i]<='z')
            b++;
    }
    printf("%d %d",a,b);
    return 0;
}*/
