/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10],i=0,max,min,sum=0;
    scanf("%d",&a[0]);
    max=a[0];
    min=a[0];
    for (i=1;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    if(max<a[i])
        max=a[i];
    if(min>a[i])
        min=a[i];
    }
    sum=sum-max-min;
    sum=sum/8;
    printf("%d",sum);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a[100];
    int i=0,sum=0;
    scanf("%d",&a[0]);
    while(a!='\0')
    {
    i++;
    scanf("%d",&a[i]);
    sum=a[i]-a[i-1];
    printf("%d ",sum);
    }
    return 0;
}
