/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d\n",a,b);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int a=0,b=0;
    scanf("%d",&a);
    for(int i=0;i<32;i++)
    {
        if(a&1)
        {
            b++;
        }
        a=a>>1;
    }
    printf("%d",b);
    return 0;
}
