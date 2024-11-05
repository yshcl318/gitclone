void InitBoard(int row,int col,char board[row][col])
{
    int i=0,j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            board[i][j]=' ';
        }
    }
}
void DislayBoard(int row,int col,char board[row][col])
{
    int i=0,j=0;
    for(i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf(" %c ",board[i][j]);
            if(j<col-1)
                printf("|");
        }
        printf("\n");
        if(i<row-1)
        {
            for (j=0;j<col;j++)
            {
                printf("---");
                if(j<col-1)
                    printf("|");
            }
        }
        printf("\n");
    }
}
void PlayMove(int row,int col,char board[row][col])
{
    int x=0,y=0;
    printf("玩家下棋\n");
    while(1)
    {
        printf("请输入要下棋的坐标:");
        scanf("%d %d",&x,&y);
        if(x>=1&&x<=row&&y>=1&&y<=col)
        {
            if(board[x-1][y-1]==' ')
            {
                board[x-1][y-1]='*';
                break;
            }
            else
            {
                printf("该坐标被占用，请输入其他坐标\n");
            }
        }
        else
        {
            printf("坐标非法，请重新输入\n");
        }
    }
}
void ComputerMove(int row,int col,char board[row][col])
{
    printf("电脑下棋\n");
    int x=0,y=0;
    while(1)
    {
        x=rand()%row;
        y=rand()%col;
        if(board[x][y]==' ')
        {
            board[x][y]='#';
            break;
        }
    }

}
int IsFull(int row,int col,char board[row][col])
{
    int i=0,j=0;
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(board[i][j]==' ')
                return 0;
        }
    }
    return 1;
}
char IsWin(int row,int col,char board[row][col])
{
    int i;
    for(i=0;i<row;i++)
    {
        if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]&&board[i][0]!=' ')
            return board[i][0];
    }
    for(i=0;i<col;i++)
    {
        if(board[0][i]==board[1][i]&&board[0][i]==board[2][i]&&board[0][i]!=' ')
            return board[0][i];
    }
    if (board[0][0]==board[1][1]&&board[0][0]==board[2][2]&&board[0][0]!=' ')
        return board[1][1];
    if (board[0][2]==board[1][1]&&board[0][2]==board[2][0]&&board[0][2]!=' ')
        return board[1][1];
        if(IsFull(row,col,board))
            return 'Q';
    return 'C';
}
void menu()
{
    printf("***************\n");
    printf("***  1.play ***\n");
    printf("***  0.exit ***\n");
    printf("***************\n");
}
void game()
{
    int row=3;
    int col=3;
    char ret=0;
    char board[row][col];
    InitBoard(row,col,board);
    DislayBoard(row,col,board);
    while(1)
    {
        PlayMove(row,col,board);
        DislayBoard(row,col,board);
        ret=IsWin(row,col,board);
        if(ret!='C')
        {
            break;
        }
        ComputerMove(row,col,board);
        DislayBoard(row,col,board);
        ret=IsWin(row,col,board);
        if(ret!='C')
        {
            break;
        }
    }
    if (ret=='*')
    {
        printf("玩家胜利\n");
    }
    else if(ret=='#')
    {
        printf("电脑胜利\n");
    }
    else
    {
        printf("平局\n");
    }
}
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int a;
    srand((unsigned int)time(NULL));
    do
    {
        menu(a);
        printf("请输入:");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏");
                break;
            default:
                break;

        }
    }while(a);
    return 0;

}
