/*#include<stdio.h>
	int main(void)
	{
	  int a,b,c;
      scanf("%d,%d",&a,&b);
      c=a+b;
      printf("%d+%d=%d\n",a,b,c);
       return 0;
	}*/
/*#include<stdio.h>
	int main(void)
	{
	  int a,b;
	  //Enter a and b:
      scanf("%d%d",&a,&b);
      printf("a=%d b=%d\n",a,b);
	  a=a+b;
      b=a-b;
      a=a-b;
	  printf("a=%d  b=%d\n",a,b);
       return 0;
	}*/
	/*#include<stdio.h>
	int main(void)
	{
	  int a,b,c,x;
      scanf("%d",&x);
      a=x/100;
      b=(x/10)%10;
      c=x%10;
	  printf("%d %d %d\n",a,b,c);
       return 0;
	}*/
/*#include<stdio.h>
	int main(void)
	{
	  int sum=0,a,b,c,d,e;
      scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
      sum=a+b+c+d+e;
      float arr=sum/5.00;
      printf("%d %.2f",sum,arr);
       return 0;
	}*/
/*#include<stdio.h>
	int main(void)
	{
	  float a,b,c,s,area;
      scanf("%f %f %f",&a,&b,&c);
      s=(a+b+c)/2;
      area=sqrt(s*(s-a)*(s-b)*(s-c));
	  printf("%.3f\n",area);
       return 0;
	}*/
/*#include<stdio.h>
	int main(void)
	{
	  double r,h,C1,Sb,Vb,PI=3.14;
      scanf("%lf,%lf",&r,&h);
      C1=2*PI*r;
      Sb=4*PI*r*r;
      Vb=r*r*h*PI;
      printf("C1=%.2lf\nSb=%.2lf\nVb=%.2lf\n",C1,Sb,Vb);
       return 0;
	}*/
/*#include<stdio.h>
	int main(void)
	{
      int a,b,c,d;
      printf("请输入三个整数:");
	  scanf("%d%d%d",&a,&b,&c);
      if(a>b)
      {
        d=a;
        a=b;
        b=d;
      }
      if(a>c)
      {
          d=a;
          a=c;
          c=b;
          b=d;
      }
      else if(b>c)
      {
          d=b;
          b=c;
          c=d;
      }
      printf("从小到大排列为:%d,%d,%d\n",a,b,c);
       return 0;
	}*/
/*#include<stdio.h>
	int main(void)
	{
	  float x;
      float y;
      scanf("%f",&x);
	  if(x<0&&x!=-3)
      {
      y=x*x+x-6;
      }
      else if(x>=0&&x<10&&x!=2&&x!=3)
      {
      y=x*x-5*x+6;
      }
      else
      {
      y=x*x-x-1;
      }
      printf("%0.3f",y);
       return 0;
	}*/
/*#include<stdio.h>
	int main(void)
	{
	  double x;
      scanf("%lf",&x);
      if(x<=100&&x>=90) printf("A\n");
      else if(x<=89&&x>=80) printf("B\n");
      else if(x<=79&&x>=70) printf("C\n");
      else if(x<=69&&x>=60) printf("D\n");
	  else if(x<60&&x>=0) printf("E\n");
      else printf("Score is error!\n");
       return 0;
	}*/


