#include <stdio.h>
#include <stdlib.h>
int f(int x);
int main()
{
   int i=1,s=0;
   do
   {
       s+=f(++i);
       printf("%d\n",s);
   }while(i<=4);
    return 0;
}
int f(int x)
{
    static int i,a=0;
    for(i=1;i<x;i++)
        a+=x;
        return a;
}
