/*#include<stdio.h>
int main()
{
    long long a;
    int j=0,i=0,b[100]={0};
    scanf("%lld",&a);
    for(i=1;a>0;i++)
    {
        b[i]=a%10;
        a=a/10;
    }
    j=i;

    if(i==1)
    {
        printf("%d %d",b[1],b[1]);
    }
    else
    {
        for(j=i;j>0;j=j-2)
    {
        if(b[i]==0)
        {
            for(j;b[j]==0&&j>0;j-=2);
        }
        printf("%d",b[j]);
    }
    printf(" ");
    for(j=i-1;j>0;j=j-2)
    {

        if(b[i-1]==0)
        {
            for(j;b[j]==0&&j>=0;j-=2);

        }
        printf("%d",b[j]);
    }
    }
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
char A[1000]={0};
int main(){
    char N[1000];
    int flag1=0;
    int flag2=0;
    int flag3=1;
    int flag4=1;
    scanf("%s",N);
    int len=strlen(N);
    for(int i=1;i<=len-1;i+=2){
        if(N[i]>'0'){
           flag1=1;
        }
        if(flag1){
            printf("%c",N[i]);
            flag3=0;
        }
    }
    if(flag3) printf("0");
    printf(" ");
    for(int i=0;i<=len-1;i+=2){
        if(N[i]>'0'){
           flag2=1;
        }
        if(flag2){
            printf("%c",N[i]);
            flag4=0;
        }
    }
    if(flag4) printf("0");
    return 0;
}
*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,m,n,s,i=0,j=0;
    char o,p,q;
    while(scanf("%d%c%d%c%d%c%d",&a,&p,&b,&o,&c,&q,&d)==7)
    {
        if(o=='-')
        {
            n=a*d-b*c;
            m=b*d;
            s=n<m?n:m;
            if(n==0)
            {
                printf("0\n");
            }
            else
            {
                for(i=s;;i--)
            {
                if(n%i==0&&m%i==0)
                {
                    n/=i;
                    m/=i;
                    if(m*n<0)
                    {
                        n=fabs(n);
                        m=fabs(m);
                        if(n==m||m==1)
                        {
                            printf("-%d\n",n);
                            break;
                        }
                        else
                        {
                            printf("-%d/%d\n",n,m);
                            break;
                        }
                    }
                    else
                    {
                        n=fabs(n);
                        m=fabs(m);
                       if(n==m||m==1)
                        {
                            printf("%d\n",n);
                            break;
                        }
                        else
                        {
                            printf("%d/%d\n",n,m);
                            break;
                        }
                    }
                }
            }
            }
        }
        else if(o=='+')
        {
            n=a*d+b*c;
            m=b*d;
            s=n<m?n:m;
            if(n==0)
            {
                printf("0\n");

            }
            else
            {
                for(j=s;;j--)
            {
                if(n%j==0&&m%j==0)
                {
                    n/=j;
                    m/=j;
                    if(m*n<0)
                    {
                        n=fabs(n);
                        m=fabs(m);
                        if(n==m||m==1)
                        {
                            printf("-%d\n",n);
                            break;
                        }
                        else
                        {
                            printf("-%d/%d\n",n,m);
                            break;
                        }
                    }
                    else
                    {
                        n=fabs(n);
                        m=fabs(m);
                       if(n==m||m==1)
                        {
                            printf("%d\n",n);
                            break;
                        }
                        else
                        {
                            printf("%d/%d\n",n,m);
                            break;
                        }
                    }
                }
            }
            }
        }
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int m=0,n=0,i=0,j=0,a=0,b=0,c=0,x=0,s=0;
    float aver=0;
    char p,q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        aver=100.00/m;
        for(j=0;j<m;j++)
        {
            scanf("%d%c%d%c%d",&a,&p,&b,&q,&c);
            if(p=='+')
            {
                x=a+b;
                if(x==c)
                    s++;
            }
            else if(p=='-')
            {
                x=a-b;
                if(x==c)
                    s++;
            }
            else if(p=='*')
            {
                x=a*b;
                if(x==c)
                    s++;
            }
            else if(p=='/')
            {
                if(b!=0)
                {
                    x=a/b;
                    if(x==c)
                        s++;
                }
            }
            else
            {
                s=s;
            }
        }
        printf("%.2f\n",s*aver);
    }
    return 0;
}
