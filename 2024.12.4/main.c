/*#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int i,m,a[N]={5,8,12,15,16,20,25,36,55},*p=a+N-2;
    printf("������һ�������������:");
    scanf("%d",&m);
    while(p>=a)
        if(*p>m)
    {
        *(p+1)=*p;
        p--;
    }
    else break;
    *(p+1)=m;
    printf("�����������в���%d֮��Ľ��Ϊ:\n",m);
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
*/
#include<stdio.h>
int main()
{
    char str[81],*p=str;
    int num,count=0;
    printf("������һ������������ֵ��ַ���:\n");
    gets(str);
    printf("�Ӹ��ַ������ҵ���������:\n");
    while(*p)
    {
        if(*p>='0'&&*p<='9')
        {
            for(num=0;*p>='0'&&*p<='9';p++)
                num=num*10+(*p-'0');
            count++;
            printf("No %d:%d ",count,num);
        }
        else
            while(*p!='\0'&&(*p<'0'||*p>'9'))
                p++;
    }
    printf("\���ҵ�%d������.\n",count);
    return 0;
}
