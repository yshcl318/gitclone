#include <stdio.h>
#include <stdlib.h>

int main()
{
    float score[10]={0};
    for (int i=0;i<10;i++)
    {
        printf("�������%dλͬѧ�ĵ÷�:",i+1);
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
    printf("ȥ��һ����߷�:%.0f,ȥ��һ����ͷ�:%.0f\n",score[9],score[0]);
    printf("ƽ����Ϊ:%.1f",sum/8);
    return 0;
}
