/*#include <stdio.h>
#include <stdlib.h>
void add(int*p)
{
    *p=*p+1;
}
int main()
{
    int num=0;
    add(&num);
    printf("%d",num);
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    printf("%d",printf("%d",printf("%d",43)));
    return 0;
}*/
/*#include <stdio.h>
void print(int n)
{
    if(n>9)
        print(n/10);
    printf("%d ",n%10);
}
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}*/
/*int my_sizeof(char*str)
{
    int count=0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}
#include<stdio.h>
int main()
{
    char arr[]="abc";
    size_t len=my_sizeof(arr);
    printf("%zd\n",len);
    return 0;
}*/
void test(int y[10],int x)
{
    int i,j,k;
    for(j=1;j<=x;j++)
        {
            for(i=1;i<=x;i++)
            {
                if (y[i]<y[i+1])
                {
                    k=y[i];
                    y[i]=y[i+1];
                    y[i+1]=k;
                }
            }
        }
    for(i=1;i<=x;i++)
    printf("%d,",y[i]);
}
#include <stdio.h>
#include<math.h>
int main()
{
    int x,y[10],z=0,i,c,d,j;
    float a,b,s=0;
    loop:printf("������ѧ��������5-10��:");
    scanf("%d",&x);
    if(x>=5&&x<=10)
    {
        printf("\n");
        printf("��һλѧ���ɼ�:");
        scanf("%d",&y[1]);
        c=y[1];
        d=y[1];
        if(y[i]>=90)
                printf("����:%d �ȼ�:��\n",y[1]);
            else if(y[i]>=80)
                printf("����:%d �ȼ�:��\n",y[1]);
            else if(y[i]>=70)
                printf("����:%d �ȼ�:��\n",y[1]);
            else if(y[i]>=60)
                printf("����:%d �ȼ�:����\n",y[1]);
            else
                printf("����:%d �ȼ�:������\n",y[1]);
        z=z+y[1];
        for(i=2;i<=x;i++)
        {
            printf("��%dλѧ���ɼ�:",i);
            scanf("%d",&y[i]);
            if(y[i]>=90)
                printf("����:%d �ȼ�:��\n",y[i]);
            else if(y[i]>=80)
                printf("����:%d �ȼ�:��\n",y[i]);
            else if(y[i]>=70)
                printf("����:%d �ȼ�:��\n",y[i]);
            else if(y[i]>=60)
                printf("����:%d �ȼ�:����\n",y[i]);
            else
                printf("����:%d �ȼ�:������\n",y[i]);
            z=z+y[i];
            c=c>y[i]?c:y[i];
            d=d<y[i]?d:y[i];
        }
    }
    else
    {
        printf("������������С��ʮ\n");
        goto loop;
    }
    a=1.00*z/x;
    for(i=1;i<=x;i++)
    {
        s=s+(a-y[i])*(a-y[i]);
    }
    b=sqrt(s/x);
    printf("��������%d���ɼ�,",x);
    printf("ƽ����Ϊ:%.2f,",a);
    printf("��׼��Ϊ:%.2f\n",b);
    printf("��߷�:%d,��ͷ�%d\n",c,d);
    printf("�������������:");
    test(y,x);
    return 0;
}
