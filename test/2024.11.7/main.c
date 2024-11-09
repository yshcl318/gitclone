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
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand((unsigned int)time(NULL));
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
void menu(int i)
{
    printf("****************\n");
    printf("**** 1.play ****\n");
    printf("**** 0.exit ****\n");
    printf("****************\n");
}
void game()
{
    int row=9,col=9;
    int rows=row+2,cols=col+2;
    char mine[rows][cols];
    char show[rows][cols];
    initboard(rows,cols,'0',mine);
    initboard(rows,cols,'*',show);
    displayboard(row,col,show);
    seyboard(row,col,mine);
    findboard(row,col,rows,cols,mine,show);
}

void initboard(int rows,int cols,char set,char mine[rows][cols])
{
    int i=0,j=0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            mine[i][j]=set;
        }
    }
}

void displayboard(int row,int col, char board[row][col])
{
    int i=0,j=0;
    printf("------扫雷------\n");
    for(i=0;i<=col;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(i=1;i<=row;i++)
    {
        printf("%d",i);
        for(j=1;j<=col;j++)
        {
            printf("%c",board[i][j]);
        }
        printf("\n");
    }
     printf("------扫雷------\n");
}

#define easy 10
void seyboard(int row,int col,char mine[row][col])
{
    int count=easy;
    while(count)
    {
        int x=rand()%row+1;
        int y=rand()%row+1;
        if(mine[x][y]=='0')
        {
            mine[x][y]='1';
            count--;
        }
    }
}
void findboard(int row,int col,int rows,int cols,char mine[rows][cols],char show[rows][cols])
{
    int x=0,y=0;
    int win=0;
     while (win<row*col-easy)
     {
        printf("请输入要排查的坐标:");
        scanf("%d %d",&x,&y);
            if(x>=1&&x<=row&&y>=1&&y<=col)
            {
                if(mine[x][y]=='1')
                {
                    printf("很遗憾，你输了\n");
                    displayboard(row,col,mine);
                    break;
                }
                else
                {
                    int c=getminecount(x,y,rows,cols,mine);
                    show[x][y]=c+'0';
                    displayboard(row,col,show);
                    win++;
                }
            }
            else
            {
                printf("坐标非法，重新输入\n");
            }
     }
     if(win==row*col-easy)
     {
         printf("胜利\n");
         displayboard(row,col,mine);
     }
}
void getminecount(int x,int y,int rows,int cols,char mine[rows][cols])
{

    return mine[x-1][y]+mine[x-1][y-1]+mine[x][y-1]+mine[x+1][y-1]+mine[x+1][y]+mine[x+1][y+1]+mine[x][y+1]+mine[x-1][y+1]-8*'0';
}
