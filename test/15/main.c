/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    float score[10]={0};
    for (int i=0;i<10;i++)
    {
        printf("请输入第%d位同学的得分:",i+1);
        scanf("%f",&score[i]);
    }
    for (int i= 0;i<10; i++)
    {
        for (int j= 0;j<10-1-i; j++)
        {
            if(score[j]> score[j+1])
            {
            float temp = score[j];
            score[j] = score[j+ 1];
            score[j+ 1]= temp;
            }
        }
    }
    double sum = 0;
    for (int k = 1; k< 9; k++)
    {
    sum += score[k];
    }
    printf("去掉一个最高分:%.0f,去掉一个最低分:%.0f\n",score[9],score[0]);
    printf("平均分为:%.1f",sum/8);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 1:printf("1");break;
        case 2:printf("2");break;
        case 3:printf("3");break;
        case 4:printf("4");
        default:printf("5");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a[6][5];
    int i=0,j=0;
    for(i=0;i<6;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j]=i*5+j+1;
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a[6][5];
    int i=0,j=0;
    for(i=0;i<6;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j]=i*5+j+1;
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("&a[%d][%d]=%p\n",i,j,&a[i][j]);
        }
    }
    return 0;
}/*

