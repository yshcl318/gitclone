
/*#include<stdio.h>
int main()
{
   int a,b,c,z;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
           z=a,a=b,b=z;
    }
        if (a>c){
        z=a,a=c,c=z;
   }
    printf("%d\n",a);
    return 0;

}*/
/*#include<stdio.h>
int main()
{
    int i,s=0;
    for(i=1;i<=1000;i++)
    {
        if(i%3==0)
        {
            s=s+i;
        }
    }
    printf("%d\n",s);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,b=0,c=0,x=0,y=0,z=0,i;
    double m=0,n=0;
    for(i=0;i<20;i++)
    {
        scanf ("%d",&a);
        if(a>0)
        {
            x++;
            b+=a;
        }
        else if(a==0)
        {
            y++;
        }
        else
        {
            z++;
            c+=a;
        }
    }
    if (x==0)b=0;
    else m=b/x;
    if (z==0)c=0;
    else n=c/z;
    printf("%d,%f,%d\n",x,m,b);
    printf("%d,%f,%d\n",z,n,c);
    printf("%d\n",y);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int num,i=0,max1=0,min1=0x7fffffff,max2=-0x7fffffff,min2=0;
    for(i=0;i<20;i++)
    {
        scanf("%d",&num);
        if(num>0)
        {
            max1=(num > max1 ? num : max1);
            min1=(num < min1 ? num : min1);
        }
        else if(num<0)
        {
            max2=(num > max2 ? num : max2);
            min2=(num < min2 ? num : min2);
        }
    }
    printf("%d,%d,%d,%d\n",max1,min1,max2,min2);
    return 0;
}*/
