#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[1000],b[1000];
    int count[1000],s[1000];
    fgets(a,1000,stdin);
    fgets(b,1000,stdin);
    int i=0,j=0,x=0;
    for(i=0;a[i]!='\n';i++)
    {
        if(a[i]!=b[i])
        {
            s[j]=i;
            j++;
        }
    }
    for(i=0;i<j;i+=2)
    {
        int f=s[i+1]-s[i];
        x+=f;
    }
    printf("%d",x);
    return 0;
}
