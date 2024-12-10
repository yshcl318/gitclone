/*#include <stdio.h>
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
}*/
/*#include<stdio.h>
int main()
{
    int s[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<=9-i;i++)
    {
        int t=s[i];
        s[i]=s[i+5];
        s[i+5]=t;
    }
    for(i=0;i<10;i++)
    {
        printf("%d",s[i]);
        if(i<9)
            printf(",");
    }
    return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int s[20],i,sum=0,j=0;
    float aver=0;
    for(i=0;i<20;i++)
    {
        scanf("%d",&s[i]);
        sum+=s[i];
    }
    aver=sum/20.000;
    printf("所有评委平均分:%.3f分.\n",aver);
    printf("不合格得分:");
    for(i=0;i<20;i++)
    {
        if(fabsf(aver-s[i])>10)
        {
            printf("%d ",s[i]);
            sum-=s[i];
            j++;
        }
    }
    printf(".\n");
    if(j==20)
        printf("无合格打分.\n");
    else
        printf("最后得分:%.3f分.",1.000*sum/(20-j));
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i,j,x=0,y=0;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)x+=arr[i][j];
            if(i>=j)y+=arr[i][j];
        }
    }
    printf("%d %d",x,y);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int m,n,i=0,j=0;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);

        }
    }
    int max=arr[0][0],min=arr[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           max=max>arr[i][j]?max:arr[i][j];
           min=min<arr[i][j]?min:arr[i][j];
        }
    }
    printf("%d",max-min);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int m,n,i=0,j=0;
    scanf("%d %d",&m,&n);
    int a[m][n],b[n][m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i]=a[i][j];

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",b[i][j]);
            if(j<m-1)
                printf(" ");

        }
        printf("\n");
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int m,n,p,i,j,k;
    scanf("%d %d %d",&m,&n,&p);
    int a[m][n],b[n][p],c[m][p];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<p;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<p;j++)
            c[i][j]=0;
    for(i=0;i<m;i++)
        for(j=0;j<p;j++)
            for(k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d",c[i][j]);
            if(j<p-1)
                printf(" ");

        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i+=2)
    {
         for(j=0;j<n;j++)
        {
            k++;
            a[i][j]=k;
        }
        k+=n;
    }
    k=n;
    for(i=1;i<n;i+=2)
    {
         for(j=n-1;j>=0;j--)
        {
            k++;
            a[i][j]=k;
        }
        k+=n;
    }
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
        {
            if(a[i][j]<10)
                printf("00%d",a[i][j]);
            else if(a[i][j]<100)
                printf("0%d",a[i][j]);
            else
                printf("%d",a[i][j]);
                if(j<n-1)
                    printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int n,i=0,j=0,k=0,x=0,y=0;
    scanf("%d",&n);
    int a[n][n];
    while(1)
    {
        for(j;j<n-x;j++)
        {
            k++;
            a[i][j]=k;
            if(k>=n*n)
                break;
        }
        if(k>=n*n)
            break;
        i+=1;
        j-=1;
        for(i;i<n-y;i++)
        {
            k++;
            a[i][j]=k;
            if(k>=n*n)
                break;
        }
        if(k>=n*n)
            break;
        j-=1;
        i-=1;
        for(j;j>x;j--)
        {
            k++;
            a[i][j]=k;
            if(k>=n*n)
                break;
        }
        if(k>=n*n)
            break;

        y++;
        for(i;i>y;i--)
        {
            k++;
            a[i][j]=k;
            if(k>=n*n)
                break;
        }
        if(k>=n*n)
            break;
        x++;

    }
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
        {
            if(a[i][j]<10)
                printf("00%d",a[i][j]);
            else if(a[i][j]<100)
                printf("0%d",a[i][j]);
            else
                printf("%d",a[i][j]);
                if(j<n-1)
                    printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,x,i=0,j,min;
    scanf("%d",&n);
    int a[n],b[n];
    int* p=&a[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",&*(p+i));
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        b[i]=*(p+i)-x;
    }
    min=abs(b[0]);
    for(i=0;i<n;i++)
    {
        j=abs(b[i]);
        min=min<j?min:j;
    }
    for(i=0;i<n;i++)
        if(abs(b[i])==min)
        {
            printf("%d",*(p+i));
            break;
        }
    return 0;
}*/
/*#include<stdio.h>
void swap(int* a,int* b)
{
    if(*a>*b)
    {
        int t=*a;
        *a=*b;
        *b=t;
    }
}
void sort(int* p,int n)
{
    int i=0,j=0;
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
            swap(&*(p+j),&*(p+j+1));
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(&a[0],n);
    return 0;
}
*/
/*#include<stdio.h>
void swap(int* a,int* b)
{
    if(*a>*b)
    {
        int t=*a;
        *a=*b;
        *b=t;
    }
}
void sort(int* p,int n,int a)
{
    int i=0,j=0;
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
            swap(&*(p+j),&*(p+j+1));
    if(a)
        for(i=0;i<n;i++)
            printf("%d ",*(p+i));
    else
        for(i=n-1;i>=0;i--)
            printf("%d ",*(p+i));
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(&a[0],n,1);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char arr[100];
    char* p=&arr[0];
    int i=0,j=0,k=0;
    scanf("%s",&arr);
    for(j=0;arr[j]!='\0';j++);
    for(i=0;arr[i]!='\0';i++)
    {
        for(k=i;k<j;k++)
            printf("%c",*(p+k));
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int countwords(char* p)
{
    int i=0,t=0;
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)!=' ')
        {
            t++;
            for(i;*(p+i)!=' ';i++);
        }
    }
    return t;
}
int main()
{
    char arr[100];
    gets(arr);
    int t=countwords(&arr[0]);
    printf("%d",t);
    return 0;
}*/
/*#include<stdio.h>
void countwords(char* p)
{
    int t=0;
    while(*p!='\0')
    {
        if(*p!=' ')
        {
            while(*p!=' ')p++;
            t++;
        }
        p++;
    }
    printf("%d",t);
}
int main()
{
    char arr[100];
    fgets(arr,100,stdin);
    countwords(arr);
    return 0;
}
*/
