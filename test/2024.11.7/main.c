/*void s(char arr[])
{
    int len=strlen(arr);
    char tmp=arr[0];
    arr[0]=arr[len-1];
    arr[len-1]='\0';
    if(len+1>=2)
    s(arr+1);
    arr[len-1]=tmp;


}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100];
    fgets(arr,100,stdin);
    s(arr);
    printf("%s\n",arr);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a=0,i=0;
    for(i=0;i<=100;i++)
    {
        if(i/10==9)
            a++;
        if(i%10==9)
            a++;
    }
    printf("%d",a);
}
