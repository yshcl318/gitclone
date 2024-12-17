#include<stdio.h>
int main()
{
    int i=0,n=0,a=0,b=0,c=0;
    char num[100];
    while(getchar()!=']')
    {
        scanf("%d",&num[n]);
        n++;
    }
    for(i=0;i<n;i++)
    {
        a=b=0;
        for(int j=0;j<n;j++)
        {
            if (num[i]<num[j])
                a++;
            else if(num[i]>num[j])
                b++;
            if(a>=1&&b>=1)
            {
                c++;
                break;
            }
        }
    }
    printf("%d",c);
    return 0;
}
