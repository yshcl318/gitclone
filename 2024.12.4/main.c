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
/*#include<stdio.h>
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
}*/
/*#include<stdio.h>
#include<stdlib.h>
FILE*fp;
int read_attribute(char *);
int main()
{
    char attr[30];
    float sum,score,maxsum;
    int order=0;
    if((fp=fopen("d:\\scores.txt","r"))==NULL)
    {
        printf("�޷����ļ���\n");
        exit(0);
    }
    sum=0.0,maxsum=0.0;
    while(read_attribute(attr))
    {
        if(order%6<=1)
            printf("%- 16s",attr);
       else if(order%6<=5)
       {
            score=atof(attr);
            sum+=score;
            printf("%4.lf ",score);
            if(order%6==5)
            {
                printf("%4.lf\n",sum);
                if(sum>maxsum)maxsum=sum;
                sum=0.0;
            }
       }
       order++;
    }
    printf("����%d��ѧ��������ܷ���%4.lf\n",order/6,maxsum);
    return  0;
}
int read_attribute(char *p)
{
    char ch=fgetc(fp);
    while(ch==' '||ch=='\t'||ch=='\n')
        ch=fgetc(fp);
    while(ch!=EOF&&ch!=';')
    {
        *p++=ch;
        ch=fgetc(fp);
    }
    *p='\0';
    if(ch==EOF)return 0;
    else return 1;
}
*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20],str3[20],temp[20];
    printf("�����������ַ�����ÿ���ַ������Իس���������:\n");
    gets(str1);
    gets(str2);
    gets(str3);
    if(strcmp(str1,str2)>0)
    {
        strcpy(temp,str1);
        strcpy(str1,str2);
        strcpy(str2,temp);
    }
    if(strcmp(str2,str3)>0)
    {
        strcpy(temp,str2);
        strcpy(str2,str3);
        strcpy(str3,temp);
    }
    if(strcmp(str1,str2)>0)
    {
        strcpy(temp,str1);
        strcpy(str1,str2);
        strcpy(str2,temp);
    }
        printf("�����:\n");
    puts(str1);
    puts(str2);
    puts(str3);
    return 0;
}*/
/*#include<stdio.h>
#define M 10
#define N 8
void merge_sort(int *x,int lenx,int *y,int leny,int *z)
{
    int i=0,j=0,k=0;
    while(i<lenx&&j<leny)
        if(x[i]<y[j])z[k++]=x[i++];
        else z[k++]=y[j++];
    while(i<lenx)
        z[k++]=x[i++];
    while(j<leny)
        z[k++]=y[j++];
}
int main()
{
    int a[M],b[N],i,c[M+N];
    for(int j=0;j<M;j++)
        scanf("%d ",&a[j]);
    for(int j=0;j<N;j++)
        scanf("%d ",&b[j]);
    printf("ԭʼ����������a:\n\t");
    for(i=0;i<M;i++)
        printf("%d,",a[i]);
     printf("\nԭʼ����������b:\n\t");
    for(i=0;i<N;i++)
        printf("%d,",b[i]);
        merge_sort(a,M,b,N,c);
        printf("\n�鲢�õ�����������c:\n\t");
        for(i=0;i<M+N;i++)
            printf("%d,",c[i]);
        printf("\n");
        return 0;
}*/
