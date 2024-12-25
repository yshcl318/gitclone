#include<stdio.h>
int main()
{
    int x,n,s=0;
    scanf("%d %d",&x,&n);
    while(n>0)
    {
        if(x<6)
        {
            s+=250;
            x++;
        }
        else if(x==6)
        {
            x++;
        }
        else
        {
            x=1;
        }
        n--;
    }
    printf("%d",s);
    return 0;
}
