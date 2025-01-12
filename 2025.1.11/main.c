/*#include <stdio.h>
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
*/
/*#include<stdio.h>
int main()
{
    int i=0,N=0,j=0,p,k;
    int num[10000];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        while(scanf("%d",&num[j])==1)
        {
            j++;
            if(getchar()=='\n')
                break;
        }
    }
    int min=num[0],max=num[0];
    for(i=0;i<j;i++)
    {
        min=min<num[i]?min:num[i];
        max=max>num[i]?max:num[i];
    }
    for(k=min;k<=max;k++)
    {
        p=0;
        for(i=0;i<j;i++)
        {
            if(k==num[i])
                p++;
        }
        if(!p)
            printf("%d ",k);
        else if(p==2)
            printf("%d",k);
    }
    return 0;

}*/
/*#include <stdio.h>
#include <stdlib.h>

// 比较函数，用于qsort
int compare(const void *a, const void *b) {
    return ( *(int*)a - *(int*)b );
}

int main() {
    int i = 0, N = 0, j = 0;
    int *num;
    scanf("%d", &N);
    num = (int *)malloc(10000 * sizeof(int));  // 假设最多有10000个ID号，可按需调整
    if (num == NULL) {
        printf("内存分配失败\n");
        return 1;
    }
    for (i = 0; i < N; i++) {
        while (scanf("%d", &num[j]) == 1) {
            j++;
            if (getchar() == '\n')
                break;
        }
    }
    // 对数组进行排序，便于后续判断断号和重号
    qsort(num, j, sizeof(int), compare);

    int missing_id = 0;
    int duplicate_id = 0;
    for (i = 0; i < j - 1; i++) {
        if (num[i + 1] - num[i] == 2) {
            missing_id = num[i] + 1;
        }
        else if (num[i + 1] - num[i] == 0) {
            duplicate_id = num[i];
        }
    }
    printf("%d %d\n", missing_id, duplicate_id);

    free(num);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i=0,N=0,j=0,p,k;
    int *num=(int*)malloc(10000*sizeof(int));
    if (num == NULL) {
        printf("内存分配失败\n");
        return 1;
    }
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        while(scanf("%d",&num[j])==1)
        {
            j++;
            if(getchar()=='\n')
                break;
        }
    }
    int min=num[0],max=num[0];
    for(i=0;i<j;i++)
    {
        min=min<num[i]?min:num[i];
        max=max>num[i]?max:num[i];
    }
    for(k=min;k<=max;k++)
    {
        p=0;
        for(i=0;i<j;i++)
        {
            if(k==num[i])
                p++;
        }
        if(!p)
            printf("%d ",k);
        else if(p==2)
            printf("%d/n",k);
    }
    free(num);
    return 0;

}*/
