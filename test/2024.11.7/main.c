/*void s(char arr[])
{
    int len=strlen(arr);
    char tmp=arr[0];
    arr[0]=arr[len-1];
    arr[len-1]='\0';
    if(len+1>=2)
    s(arr+1);
    arr[len-1]=tmp;


}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100];
    fgets(arr,100,stdin);
    s(arr);
    printf("%s\n",arr);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a=0,i=0;
    for(i=0;i<=100;i++)
    {
        if(i/10==9)
            a++;
        if(i%10==9)
            a++;
    }
    printf("%d",a);
}*/
#define row 9
#define col 9
#define rows row+2
#define cols col+2
void menu(int i)
{
    printf("****************\n");
    printf("**** 1.play ****\n");
    printf("**** 0.exit ****\n");
    printf("****************\n");
}
void game()
{
    char mine[rows][cols];
    char show[rows][cols];
}
#include<stdio.h>
int main()
{
    int i=0;
    do
    {
        menu(i);
        printf("请输入：");
        scanf("%d",&i);
        if(i==1)
        {
            game();
        }
        else if(i==0)
        {
            printf("退出游戏\n");
            break;
        }
        else
            printf("选择错误，请重新选择\n");
    }while(i);
    return 0;
}
