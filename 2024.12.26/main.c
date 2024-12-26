#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int * a=(int *)malloc(n* sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<i;j++)
            if(*(a+j)>*(a+i))
                s++;
    s=s%((int)pow(10,9)+7);
    printf("%d",s);
    return 0;
}
