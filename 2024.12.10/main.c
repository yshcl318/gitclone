#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
        if(i<9)
            printf(",");
    }
    printf("\n");
    for(i=0;i<=9-i;i++)
    {
        int t=arr[i];
        arr[i]=arr[9-i];
        arr[9-i]=t;
    }
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
        if(i<9)
            printf(",");
    }
    return 0;
}
