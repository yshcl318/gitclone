/*----------------------------------------
功能：计算并输出high以内最大的10个素数之和。
要求：只能修改错误区域中的错误代码。
      不能改动区域以外的程序。
----------------------------------------*/
/*#include <stdio.h>
#include<math.h>

int main()
{
	int sum=0,n=0,j,yes,high;
	//--------------错误区域开始------------------
	scanf("%d",&high);
	while((high>=2)&&(n<10))
	{
		yes=1;
		for(j=2;j<=sqrt(high);j++)
			if(high%j==0)
			{
				yes=0;
				break;
			}
		if(yes)
		{
			sum+=high;
			n++;
		}
		high--;
	}
	printf("sum=%d\n",sum);
	//-----------错误区域结束---------------------
	return 0;
}*/
/*#include<stdio.h>
	int main(void)
	{

	  int a=0,n=0,i=0,s=0,b;
      scanf("%d %d",&a,&n);
      b=a;
      if(n==1)
      {
          s=a;
      }
	  else
      {
          for(i=1;i<n;i++)
        {
            a=a*10+b;
            s=s+a;
        }
        s=s+b;
      }
      printf("%d",s);

       return 0;
	}*/
/*#include<stdio.h>
int main(){
    int a,b;
    while(1){
        if(scanf("%d%d",&a,&b)!=2) break;
        printf("%d\n",a+b);
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)==2){
        printf("%d\n",a+b);
    }
    return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i=0,yes=0;
    while(1)
    {
        scanf("%d %d",&a,&b);
        for(i=1;i<10000;i++)
        {
            yes=0;
            if((int)sqrt(i+a)*(int)sqrt(i+a)==(i+a)&&(int)sqrt(i+b)*(int)sqrt(i+b)==(i+b))
            {
                yes=1;
                break;
            }
        }
        if(yes==1)
        printf("%d\n",i);
        else
        printf("Not found!\n");
    }
    return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i=0,yes=0;
    while(scanf("%d %d",&a,&b)==2)
    {
        for(i=1;i<10000;i++)
        {
            yes=0;
            if((int)sqrt(i+a)*(int)sqrt(i+a)==(i+a)&&(int)sqrt(i+b)*(int)sqrt(i+b)==(i+b))
            {
                yes=1;
                break;
            }
        }
        if(yes==1)
        printf("%d\n",i);
        else
        printf("Not found!\n");
    }
    return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    while(scanf("%d",&a)==1)
    {
        c=0;
        b=a;
        while(a>0)
        {
            c=c*10+a%10;
            a=a/10;
        }
        if(b==c)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,b,c,i=0;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a+b==c)
            i++;
    }
    printf("%d",i);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,i,j;
    char ch;
    while(scanf("%d %c",&a,&ch)==2)
    {
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=(2*i-1);j++)
                printf("%c",ch);
            printf("\n");

        }
        for(i=a-1;i>=0;i--)
        {
            for(j=1;j<=2*i-1;j++)
                printf("%c",ch);
            printf("\n");

        }
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,x=0,y=0,z=0,sum=0;
    while(scanf("%d",&a)==1)
    {
        if(a==1)
            b++;
        else if(a==2)
            c++;
        else if(a==3)
            d++;
    }
    x=b*1000;
    b=b/3;
    x=x+b*1000;
    y=c*500;
    c=c/6;
    y=y+c*500;
    z=d*200;
    d=d/10;
    z=z+d*200;
    sum=x+y+z;
    printf("%d",sum);
}*/
/*#include<stdio.h>
	int main(void)
	{
	  int a,b,c,d;
      scanf("%d %d",&a,&b);
      for(c=a>b?a:b;c>0;c--)
      {
          if(a%c==0&&b%c==0)
          break;
      }
      for(d=1;;d++)
      {
          if(d%a==0&&d%b==0)
          break;
      }
      printf("最大公约数是:%d\n",c);
      printf("最小公倍数是:%d",d);
       return 0;
	}*/
/*#include<stdio.h>
	int main(void)
	{

	  char s[100];
      int a=0,b=0,c=0,d=0;
      fgets(s,100,stdin);
      for(int i=0;s[i]!='\n';i++)
      {
          if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
          a++;
          else if(s[i]>='0'&&s[i]<='9')
          b++;
          else if(s[i]==' ')
          c++;
          else
          d++;
      }
	  printf("%d %d %d %d",a,b,c,d);
       return 0;
	}*/
/*#include<stdio.h>
	int main(void)
	{
	  int num,a=0,sum=1;
      scanf("%d",&num);
      while(num!=0)
      {
          a=num%10;
          num=num/10;
          sum=sum*a;
      }
	  printf("%d",sum);
       return 0;
	}*/
/*	int s(int i)
{
    if(i<0)
    return 0;
    else if(i==0)
    return 1;
    else if(i>0)
    return i*s(i-1);
}
#include<stdio.h>
	int main(void)
	{
	  int i=0,sum=0,x=0;
      scanf("%d",&i);
      for(int a=1;a<=i;a++)
      {
        x=s(a);
        sum=sum+x;
      }
	  printf("%d",sum);
       return 0;
	}
*/
/*#include<stdio.h>
	int main(void)
	{

      float a,sum;
      int i=0;
      for(i=1;i<=100;i++)
      {
          if(i%2==0)
              a=-(1/(i*1.000));
          else
              a=1/(i*1.000);
              sum+=a;
      }
	  printf("%.3f",sum);
	  return 0;
	}*/
/*------------------------------------------------
功能：计算多项式之和
要求：请在数字标识的填空位置,补充程序。
      不能改动其他地方的程序
-------------------------------------------------*/
/*#include<stdio.h>
#include<math.h>

int main()
{
	double x,f,t;
	int n;
    scanf("%lf",&x);
	//---1---
    f=1.0+x;
    //---2---;
    t=x;
    n=1;
    //---3---;
    do{
		n++;
        t*=x/n;
        //---4---;
        f+=t;
        //---5---;
	}while(sqrt(t*t)>1e-6);//---6---;
    printf("The result is :f=%-12.6f\n",f);
	return 0;
}*/
/*#include<stdio.h>
#include<math.h>

//定义main函数
int main()
{
	//请在此添加您的代码
    double x1=0.0,x0;
    while(1)
    {
        x0=x1;
        x1=cos(x0);
        if(sqrt((x0-x1)*(x0-x1))<1e-6)
        {
            printf("root=%f\n",x0);
            break;
        }
    }
	return 0;
}*/
