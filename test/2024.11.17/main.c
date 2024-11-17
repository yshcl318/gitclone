/*#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a=0,b=0,n=0,i=0,j=0,k=0,g=0,d;
    long s[100]={0},c=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        k=0;
        c=0;
        scanf("%d %d",&a,&b);
        for(j=0;a>0;j++)
        {
            s[j]=a%10;
            a=a/10;
        }
        if(s[0]==0)
            for(k=0;s[k]==0;k++);
        g=j-1;
        for(d=k;d<j;d++,g--)
        {
            t=pow(10,g);
            t=t*s[d];
            c+=t;
        }
        c=c*b;
        printf("%ld\n",c);
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n,i=0,x=0,y=0,z=0;
    char a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%c%d%c%d%c",&x,&a,&y,&b,&z,&c);
        if(x==y&&x==z)
        {
            if(x==11)
                printf("Leopard J\n");
            else if(x==12)
                printf("Leopard Q\n");
            else if(x==13)
                printf("Leopard K\n");
            else if(x==14)
                printf("Leopard A\n");
            else if(x>=2&&x<=10)
                printf("Leopard %d\n",x);
        }
        else if(a==b&&a==c&&((x+y==2*z)||(x+z==2*y)||(y+z==2*x)))
        {
            x=x>y?x:y;
            x=x>z?x:z;
            if(x==11)
                printf("Flush straight J\n");
            else if(x==12)
                printf("Flush straight Q\n");
            else if(x==13)
                printf("Flush straight K\n");
            else if(x==14)
                printf("Flush straight A\n");
            else if(x>=2&&x<=10)
                printf("Flush straight %d\n",x);
        }
        else if(x+y==2*z||x+z==2*y||y+z==2*x)
        {
            x=x>y?x:y;
            x=x>z?x:z;
            if(x==11)
                printf("Straight J\n");
            else if(x==12)
                printf("Straight Q\n");
            else if(x==13)
                printf("Straight K\n");
            else if(x==14)
                printf("Straight A\n");
            else if(x>=2&&x<=10)
                printf("Straight %d\n",x);
        }
        else if(a==b&&a==c)
        {
            x=x>y?x:y;
            x=x>z?x:z;
            if(x==11)
                printf("Same kind J\n");
            else if(x==12)
                printf("Same kind Q\n");
            else if(x==13)
                printf("Same kind K\n");
            else if(x==14)
                printf("Same kind A\n");
            else if(x>=2&&x<=10)
                printf("Same kind %d\n",x);
        }
        else if(x==y)
        {
            if(x==11)
                printf("Pair J\n");
            else if(x==12)
                printf("Pair Q\n");
            else if(x==13)
                printf("Pair K\n");
            else if(x==14)
                printf("Pair A\n");
            else if(x>=2&&x<=10)
                printf("Pair %d\n",x);
        }
        else if(x==z)
        {
            if(x==11)
                printf("Pair J\n");
            else if(x==12)
                printf("Pair Q\n");
            else if(x==13)
                printf("Pair K\n");
            else if(x==14)
                printf("Pair A\n");
            else if(x>=2&&x<=10)
                printf("Pair %d\n",x);
        }
        else if(z==y)
        {
            if(z==11)
                printf("Pair J\n");
            else if(z==12)
                printf("Pair Q\n");
            else if(z==13)
                printf("Pair K\n");
            else if(z==14)
                printf("Pair A\n");
            else if(z>=2&&z<=10)
                printf("Pair %d\n",z);
        }
        else
        {
            x=x>y?x:y;
            x=x>z?x:z;
            if(x==11)
                printf("General J\n");
            else if(x==12)
                printf("General Q\n");
            else if(x==13)
                printf("General K\n");
            else if(x==14)
                printf("General A\n");
            else if(x>=2&&x<=10)
                printf("General %d\n",x);
        }
    }
        return 0;
}
