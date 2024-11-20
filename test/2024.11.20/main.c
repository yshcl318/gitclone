/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    while(i<=15)
        if(++i%3!=2)continue;
    else printf("%d  ",i);
        printf("\0");
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    char str[20]="azdwgtjqmn";
    int i,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        str[i]+=4;
        if(str[i]>'z')str[i]-=26;
        count++;
    }
    printf("str[%d]=%s\n",count,str);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char s1[]="computing",s2[]="computer";
    int i=0;
    while(s1[i]!='\0'&&s2[i]!='\0'&&s1[i]==s2[i])
        i++;
    printf("s1-s2=%d\n",s1[i]-s2[i]);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i,j,t;
    int a[11]={0,8,3,20,-4,15,-20,6,50,24,8};
    for(i=2;i<=10;i++)
        for(j=i;j>1;j--)
            if(a[j-1]>a[j])
            {
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
            else break;
        for(i=1;i<=10;i++)
            printf("%d ",a[i]);
        return 0;
}*/
/*#include<stdio.h>
#define N 7
#define L (80-N)/2
int main()
{
    char c='A';
    int i=0,j=0,p=0;
    for(i=1;i<=N;i++,c++)
    {
        if(i<=(N+1)/2)p=p+1;
        else p=p-1;
        for(j=1;j<=L+(N+1)/2-p;j++)
            printf(" ");
            for(j=1;j<=2*p-1;j++)
                printf("%c",c);
            printf("\n");
    }
    return 0;
}
*/
