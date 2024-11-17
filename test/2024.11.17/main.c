/*#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a=0,b=0,n=0,i=0,j=0,k=0,g=0,d;
    long s[100]={0},c=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        k=0;
        c=0;
        scanf("%d %d",&a,&b);
        for(j=0;a>0;j++)
        {
            s[j]=a%10;
            a=a/10;
        }
        if(s[0]==0)
            for(k=0;s[k]==0;k++);
        g=j-1;
        for(d=k;d<j;d++,g--)
        {
            t=pow(10,g);
            t=t*s[d];
            c+=t;
        }
        c=c*b;
        printf("%ld\n",c);
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i=0,x=0,y=0,z=0;
    char a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%c%d%c%d%c",&x,&a,&y,&b,&z,&c);
        if(x==y&&x==z)
        {
            if(x==11)
                printf("Leopard J\n");
            else if(x==12)
                printf("Leopard Q\n");
            else if(x==13)
                printf("Leopard K\n");
            else if(x==14)
                printf("Leopard A\n");
            else if(x>=2&&x<=10)
                printf("Leopard %d\n",x);
        }
        else if(a==b&&a==c&&((x+1==y&&x+2==z)||(x+1==z&&x+2==y)||(y+1==x&&y+2==z)||(y+1==z&&y+2==x)||(z+1==x&&z+2==y)||(z+1==y&&z+2==x)))
        {
            x=x>y?x:y;
            x=x>z?x:z;
            if(x==11)
                printf("Flush straight J\n");
            else if(x==12)
                printf("Flush straight Q\n");
            else if(x==13)
                printf("Flush straight K\n");
            else if(x==14)
                printf("Flush straight A\n");
            else if(x>=2&&x<=10)
                printf("Flush straight %d\n",x);
        }
        else if((x+1==y&&x+2==z)||(x+1==z&&x+2==y)||(y+1==x&&y+2==z)||(y+1==z&&y+2==x)||(z+1==x&&z+2==y)||(z+1==y&&z+2==x))
        {
            x=x>y?x:y;
            x=x>z?x:z;
            if(x==11)
                printf("Straight J\n");
            else if(x==12)
                printf("Straight Q\n");
            else if(x==13)
                printf("Straight K\n");
            else if(x==14)
                printf("Straight A\n");
            else if(x>=2&&x<=10)
                printf("Straight %d\n",x);
        }
        else if(a==b&&a==c)
        {
            x=x>y?x:y;
            x=x>z?x:z;
            if(x==11)
                printf("Same kind J\n");
            else if(x==12)
                printf("Same kind Q\n");
            else if(x==13)
                printf("Same kind K\n");
            else if(x==14)
                printf("Same kind A\n");
            else if(x>=2&&x<=10)
                printf("Same kind %d\n",x);
        }
        else if(x==y)
        {
            if(x==11)
                printf("Pair J\n");
            else if(x==12)
                printf("Pair Q\n");
            else if(x==13)
                printf("Pair K\n");
            else if(x==14)
                printf("Pair A\n");
            else if(x>=2&&x<=10)
                printf("Pair %d\n",x);
        }
        else if(x==z)
        {
            if(x==11)
                printf("Pair J\n");
            else if(x==12)
                printf("Pair Q\n");
            else if(x==13)
                printf("Pair K\n");
            else if(x==14)
                printf("Pair A\n");
            else if(x>=2&&x<=10)
                printf("Pair %d\n",x);
        }
        else if(z==y)
        {
            if(z==11)
                printf("Pair J\n");
            else if(z==12)
                printf("Pair Q\n");
            else if(z==13)
                printf("Pair K\n");
            else if(z==14)
                printf("Pair A\n");
            else if(z>=2&&z<=10)
                printf("Pair %d\n",z);
        }
        else
        {
            x=x>y?x:y;
            x=x>z?x:z;
            if(x==11)
                printf("General J\n");
            else if(x==12)
                printf("General Q\n");
            else if(x==13)
                printf("General K\n");
            else if(x==14)
                printf("General A\n");
            else if(x>=2&&x<=10)
                printf("General %d\n",x);
        }
    }
        return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,i=0,j=0,k=0,b=0,c=0;
    scanf("%d",&a);
    for(i=2;i<a/2;i++)
    {
        b=0;
        for(j=1;j<=sqrt(i);j++)
           if(i%j==0)
               b++;
        if(b==1)
        {
            for(k=2;k<a;k++)
            {
                c=0;
                for(j=1;j<=sqrt(k);j++)
                    if(k%j==0)
                        c++;
                if(c==1)
                    if(k!=i&&k+i==a)
                        printf("%d=%d+%d\n",a,i,k);

            }
        }
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    long long n,m=0;
    scanf("%lld",&n);
    do
    {
        m=0;
        while(n>0)
        {
            m=m+n%10;
            n/=10;
        }
        n=m;
    }while(m>9);
    printf("%d",m);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a!=1)
    {
        if(a%2==0)
        {
            a/=2;
            printf("%d ",a);
        }
        else
        {
            a=a*3+1;
            printf("%d ",a);
        }
    }
    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    int repeat=0,n=0,i=0,j=0,m=0,a=0,b=0,c=0,d=0,f=0,max=0,k=0;
    char arr[5][100];
    scanf("%d",&repeat);
    for(k=0;k<repeat;k++)
    {
        for(i=0;i<5;i++)
            for(j=0;j<100;j++)
                    arr[i][j]=' ';
        a=0;b=0;c=0;d=0;f=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&m);
            if(m==1)
                a++;
            else if(m==2)
                b++;
            else if(m==3)
                c++;
            else if(m==4)
                d++;
            else if(m==5)
                f++;
        }
        max=0;
        max=a>b?a:b;
        max=max>c?max:c;
        max=max>d?max:d;
        max=max>f?max:f;
        for(j=0;j<a;j++)
            arr[j][0]='*';
        for(j=0;j<b;j++)
            arr[j][1]='*';
        for(j=0;j<c;j++)
            arr[j][2]='*';
        for(j=0;j<d;j++)
            arr[j][3]='*';
        for(j=0;j<f;j++)
            arr[j][4]='*';
        for(j=max-1;j>=0;j--)
        {
            for(i=0;i<5;i++)
                printf("%c ",arr[j][i]);
            printf("\n");
        }
        printf("1 2 3 4 5\n");
    }
    return 0;
}*/
#include<stdio.h>

int main() {
    int repeat = 0, n = 0, i = 0, j = 0, m = 0, a = 0, b = 0, c = 0, d = 0, f = 0, max = 0, k = 0;
    char arr[5][100]; // 只需要一个5行100列的数组

    scanf("%d", &repeat);
    for (k = 0; k < repeat; k++) {
        // 初始化数组
        for (i = 0; i < 5; i++)
            for (j = 0; j < 100; j++)
                arr[i][j] = ' ';

        a = b = c = d = f = 0;
        scanf("%d", &n);
        for (j = 0; j < n; j++) {
            scanf("%d", &m);
            if (m == 1)
                a++;
            else if (m == 2)
                b++;
            else if (m == 3)
                c++;
            else if (m == 4)
                d++;
            else if (m == 5)
                f++;
        }

        max = a > max ? a : max;
        max = b > max ? b : max;
        max = c > max ? c : max;
        max = d > max ? d : max;
        max = f > max ? f : max;

        // 打印直方图
        for (j = 0; j < max; j++) {
            for (i = 0; i < a; i++)
                if (j < a) arr[0][j] = '*';
            for (i = 0; i < b; i++)
                if (j < b) arr[1][j] = '*';
            for (i = 0; i < c; i++)
                if (j < c) arr[2][j] = '*';
            for (i = 0; i < d; i++)
                if (j < d) arr[3][j] = '*';
            for (i = 0; i < f; i++)
                if (j < f) arr[4][j] = '*';
        }

        // 打印直方图的每一行
        for (j = max-1; j >= 0; j--) {
            for (i = 0; i < 5; i++)
                printf("%c ", arr[i][j]);
            printf("\n");
        }
        printf("1 2 3 4 5\n");
    }
    return 0;
}
