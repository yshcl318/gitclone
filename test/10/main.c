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
/*void test(int y[10],int x)
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
        q:printf("��һλѧ���ɼ�:");
        scanf("%d",&y[1]);
        c=y[1];
        d=y[1];
        if(y[i]>100||y[i]<0)
        {
            printf("������Ϣ������������\n");
            goto q;
        }
        else if(y[i]>=90)
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
            arr:printf("��%dλѧ���ɼ�:",i);
            scanf("%d",&y[i]);
            if(y[i]>100||y[i]<0)
            {
                printf("������Ϣ������������\n");
                goto arr;
            }
            else if(y[i]>=90)
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
}*/
/*void test(int y[10],int x)
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
    int x,y[10],z=0,i,c=0,d=101,j;
    float a,b,s=0;
    loop:printf("������ѧ��������5-10��:");
    scanf("%d",&x);
    if(x>=5&&x<=10)
    {
        printf("\n");
        for(i=1;i<=x;i++)
        {
            arr:printf("��%dλѧ���ɼ�:",i);
            scanf("%d",&y[i]);
            if(y[i]>100||y[i]<0)
            {
                printf("������Ϣ������������\n");
                goto arr;
            }
            else if(y[i]>=90)
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
}*/
#include <stdio.h>
#include <math.h>
int main(){
	printf("������ѧ����������5-10����");
	int a;
	int i,j;
	scanf("%d",&a);
	if (a<5 || a>10)
	{
		while(a<5 || a>10)
		{
	    printf("��������5��С��10��\n");
	    printf("������ѧ����������5-10����");
	    scanf("%d",&a);
        }
    }
    printf("\n");
	int z[a];
	for(i=0;i<a;i++){
		printf("��%dλͬѧ�ĳɼ�",i+1);
		scanf("%d",&z[i]);
		printf("%d",z[i]);
		if(z[i]<0 || z[i]>100){
			while(z[i]<0 || z[i]>100){
			printf("����ֵ������Χ��������ѧ���ɼ���0-100����");
		    scanf("%d",&z[i]);
			}
		}
		printf("������%d,",z[i]);
		if(z[i]>=90) printf("�ȼ�����\n");
		else if(z[i]<90 && z[i]>=80) printf("�ȼ�����\n");
		else if(z[i]<80 && z[i]>=70) printf("�ȼ�����\n");
	    else if(z[i]<70 && z[i]>=60) printf("�ȼ�������\n");
	    else printf("�ȼ���������\n");
	}
	float p,b;
	p=0.00;
	b=0.00;
	for(i=0;i<a;i++)
	{
	p+=z[i];
    }
    p/=a;
    for(i=0;i<a;i++)
	{
	b+=(z[i]-p)*(z[i]-p);
    }
    b/=a;
    b=sqrt(b);
	printf("��������%d���ɼ���ƽ����Ϊ��%.2f����׼��Ϊ��%.2f\n",a,p,b);
	int m1,m2;
	m1=z[0];
	m2=z[0];
	for(i=0;i<a;i++)
	{
	 if(z[i] >= m1) m1=z[i];
	 if(z[i] <= m2) m2=z[i];
    }
    printf("��߷֣�%d����ͷ֣�%d\n",m1,m2);
    m1=z[0];
    for(i=0;i < a;i++){
    	for(j=0;j < a-j+3;j++)
    	if(z[j] <= z[j+1]) {
		  m1=z[j];
		  z[j]=z[j+1];
		  z[j+1]=m1;
		}
	}
	printf("���������������");
	for(i=0;i<a;i++)
	{
	printf("%d��",z[i]);
}
	return 0;
}
