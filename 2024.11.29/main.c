/*#include <stdio.h>
void Rua();
int main() {
	Rua();//µ÷ÓÃµÝ¹éº¯Êý
	return 0;
}

void Rua() {

	int a[100],i,j;
	for (i=0;scanf("%d",&a[i])==1;i++);
	for(j=i-1;j>=0;j--)
    {
        printf("%d\n",a[j]);
    }

}*/
/*#include <stdio.h>
int ack(int, int);
int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	printf("%d", ack(m, n));
	return 0;
}

int ack(int m, int n) {
	if(m==0)
        return n+1;
    else if(m>0&&n==0)
        return ack(m-1,1);
    else if(m>0&&n>0)
        return ack(m-1,ack(m,n-1));

}*/
#include <stdio.h>
int panda[101] = { 1, 1, 1, 1, 2 };
int s(int);

int main()
{
    int n;
    scanf("%d",&n);
    int a=s(n);
    printf("%d",a);
    return 0;
}
int s(int n)
{
    if(n<5)
        return 1;
    else
        return s(n-1)+s(n-4);
}

/*#include <stdio.h>
long long hanoi(int num) {
	if(num==1)
        return 2;
    else
        return 3*hanoi(num-1)+2;
}
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		printf("%lld\n", hanoi(n));
	}
	return 0;
}*/
/*#include<stdio.h>
long long s(long long a,long long b)
{
    if(a%b==0)
        return b;
    else
        return s(b,a%b);
}
int main()
{
    long long a,b;
    scanf("%lld%lld",&a,&b);
    long long c=s(a,b);
    printf("%lld",c);
    return 0;
}*/
/*#include<stdio.h>
long long gcd(long long a,long long b){
    if(a%b==0) return b;
    else       return gcd(b,a%b);        //µÝ¹é
}
int main(){
  long long m,n;
  scanf("%lld%lld",&m,&n);
  printf("%lld",gcd(m,n));
  return 0;
}
*/
/*#include<stdio.h>
int s(int n)
{
    if(n==1)
        return 1;
    else
        return n+s(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int c=s(n);
    printf("%d",c);
    return 0;
}
*/
/*#include<stdio.h>
void s(int n)
{
    int i=0,a[100]={0};
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n/=2;
    }
    for(int j=i-1;j>=0;j--)
        printf("%d",a[j]);
    printf("\n");
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        s(i);
    }
    return 0;
}
*/
/*#include<stdio.h>
int s(int i)
{
    int a=i%16;
    if(a<10)
    {
        if(i/16>0)
            s(i/16);
        printf("%d",a);
    }
    else if(a>=10)
    {
        if(i/16>0)
            s(i/16);
        switch(a)
        {
            case 10:printf("A");break;
            case 11:printf("B");break;
            case 12:printf("C");break;
            case 13:printf("D");break;
            case 14:printf("E");break;
            case 15:printf("F");break;
        }
    }
}
int main()
{
    int a,b,i;
    char c[1000];
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s(i);
        printf(" ");
    }
    return 0;
}*/
/*#include<stdio.h>
int s(int n)
{
    if(n==1)
        return 1;
    else
        return 2*s(n-1)+1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int c=s(n);
    printf("%d",c);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,s=1;
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++)
    {
        s=2*s+1;
    }
    printf("%d",s);
    return 0;
}*/
