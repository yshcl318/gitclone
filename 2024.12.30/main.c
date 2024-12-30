#define N 50
#include <stdio.h>
#include <stdlib.h>
struct student
{
    char s;
    char time[20];
}stu[N];
int read()
{
    char a,b,c;
    int i=0;
    FILE*fp;
    fp=fopen("submissions.txt","r");
    if(fp==NULL)
    {
        printf("打开错误！");
        exit(0);
    }
    while(fscanf("%s %s %s",&a,&b,&c)!=EOF)
    {
        strcpy(stu[i].s,a);
        strcpy(stu[i].time,b);
        strcat(stu[i].time,c);
        i++;
    }
    fclose(fp);
    return i;
}
void cha()
{
    char stud[50];
    int i=0,j=0,k=0;
    FILE*fp;
    fp=fopen("stduents.txt","r");
    if(fp==NULL)
    {
        printf("打开错误！");
        exit(0);
    }
    while(fscanf("%s",stud[i])==1)
        i++;
    for(i=0;i<N;i++)
    {
        k=0;
        for(j=0;j<N;j++)
        {
            if(!strcmp(stud[i],stu[j].s))
                k++;
        }
        if(k==0)
            printf("%s",stud[i]);
    }
    fclose(fp);
}
void shijian(int n)
{
    char f[20],l[20];
    strcpy(f,stu[0].time);
    strcpy(l,stu[0].time);
    for(int i=0;i<n;i++)
    {
        if(strcmp(f,stu[i].time)>0)
            strcpy(f,stu[i].time);
        else if(strcmp(l,stu[i].time)<0)
            strcpy(l,stu[i].time);
    }
    for(int i=0;i<n;i++)
    {
        if(strcmp(f,stu[i].time)==0)
            printf("学生%d最早提交，提交时间%s", stu[i].s, stu[i].time);
        else if(strcmp(l,stu[i].time)==0)
            printf("学生%d最晚提交，提交时间%s", stu[i].s, stu[i].time);
    }
}
int main()
{
    int i=read();
    cha();
    shijian(i);
    return 0;
}
