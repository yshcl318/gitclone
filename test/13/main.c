/*#include<stdio.h>
	int main(void)
	{
	  int a,b,c,d;
      float e;
      printf("Enter item number:\n");
      scanf("%d",&a);
      printf("Enter unit price:\n");
      scanf("%f",&e);
      printf("Enter purchase date (mm/dd/yy):\n");
	  scanf("%d/%d/%d",&b,&c,&d);
      printf("Item Unit Purchase\n");
      printf("%-9d$ %-9.2f%02d%02d%02d\n",a,e,b,c,d);
       return 0;
	}
	*/
/*#include<stdio.h>
#include<math.h>
	int main(void)
	{
	  float a,b,c,x1,x2;
      printf("Please enter the coefficients a,b,c:\n");
      scanf("%f,%f,%f",&a,&b,&c);
	  x1=(-b+sqrt(b*b-4*a*c))/(2*a);
      x2=(-b-sqrt(b*b-4*a*c))/(2*a);
      if(a!=0&&(b*b-4*a*c)>=0)
      printf("x1=%.4f, x2=%.4f\n",x1,x2);
      else
      printf("error!\n");
       return 0;
	}*/
	/*#include <stdio.h>
    int main()
    {
        int a,b;
        printf("请选择石头（0）、布（1）、剪刀（2）：\n");
        scanf("%d %d",&a,&b);
        printf("玩家1：玩家2：");
        if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
        printf("玩家2胜！");
        if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))
        printf("玩家1胜！");
        if(a==b)
        printf("平局！");
        return 0;
    }*/
   /* #include <stdio.h>
    int main()
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b<c||a+c<b||b+c<a)
            printf("不能构成三角形");
        else if(a==b&&a==c)
            printf("等边三角形");
        else if(a==b||a==c||b==c)
            printf("等腰三角形");
        else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            printf("直角三角形");
        else
            printf("一般三角形 ");
        return 0;
    }*/
   /* #include <stdio.h>
    int main()
    {
        int a;
        scanf("%d",&a);
        if((a%4==0&&a%100!=0)||a%400==0)
        printf("%d是闰年",a);
        else
        printf("%d不是闰年",a);
        return 0;
    }*/
