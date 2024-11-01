#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
      int a,d;
	  float b,c;
      scanf("%d,%f",&a,&b);
      if(a<0||a>4||b<0)
      {
        printf("Error in Area\n");
        printf("Price: 0.00\n");
      }
      else if(a==0)
      {
        if(b<=1)
          printf("Price: 10.00\n");
        else
        {
          d=b;
          if(b>d)
        {
          c=d*3.00+10;
          printf("Price: %.2f\n",c);
        }
        else
        {
          c=(d-1)*3.00+10;
          printf("Price: %.2f\n",c);
        }
        }
      }
      else if(a==1)
      {
        if(b<=1)
          printf("Price: 10.00\n");
        else
        {
          d=b;
          if(b>d)
        {
          c=d*4.00+10;
          printf("Price: %.2f\n",c);
        }
        else
        {
          c=(d-1)*4.00+10;
          printf("Price: %.2f\n",c);
        }
        }
      }
      else if(a==2)
      {
        if(b<=1)
          printf("Price: 15.00\n");
        else
        {
          d=b;
          if(b>d)
        {
          c=d*5.00+15;
          printf("Price: %.2f\n",c);
        }
        else
        {
          c=(d-1)*5.00+15;
          printf("Price: %.2f\n",c);
        }
        }
      }
      else if(a==3)
      {
        if(b<=1)
          printf("Price: 15.00\n");
        else
        {
          d=b;
          if(b>d)
        {
          c=d*6.50+15;
          printf("Price: %.2f\n",c);
        }
        else
        {
          c=(d-1)*6.50+15;
          printf("Price: %.2f\n",c);
        }
        }
      }
      else if(a==4)
      {
        if(b<=1)
          printf("Price: 15.00\n");
        else
        {
          d=b;
          if(b>d)
        {
          c=d*10.00+15;
          printf("Price: %.2f\n",c);
        }
        else
        {
          c=(d-1)*10.00+15;
          printf("Price: %.2f\n",c);
        }
        }
      }
	  /*********End**********/
       return 0;
	}
