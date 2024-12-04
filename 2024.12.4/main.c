#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int i,m,a[N]={5,8,12,15,16,20,25,36,55},*p=a+N-2;
    printf("请输入一个待插入的整数:");
    scanf("%d",&m);
    while(p>=a)
        if(*p>m)
    {
        *(p+1)=*p;
        p--;
    }
    else break;
    *(p+1)=m;
    printf("在升序数组中插入%d之后的结果为:\n",m);
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
