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
        printf("��ѡ��ʯͷ��0��������1����������2����\n");
        scanf("%d %d",&a,&b);
        printf("���1�����2��");
        if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
        printf("���2ʤ��");
        if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))
        printf("���1ʤ��");
        if(a==b)
        printf("ƽ�֣�");
        return 0;
    }*/
   /* #include <stdio.h>
    int main()
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b<c||a+c<b||b+c<a)
            printf("���ܹ���������");
        else if(a==b&&a==c)
            printf("�ȱ�������");
        else if(a==b||a==c||b==c)
            printf("����������");
        else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            printf("ֱ��������");
        else
            printf("һ�������� ");
        return 0;
    }*/
   /* #include <stdio.h>
    int main()
    {
        int a;
        scanf("%d",&a);
        if((a%4==0&&a%100!=0)||a%400==0)
        printf("%d������",a);
        else
        printf("%d��������",a);
        return 0;
    }*/
