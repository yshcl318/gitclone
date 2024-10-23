/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch[100];
    fgets(ch,100,stdin);
    if(ch[0]!='\n')
    {
        printf("%s\n",ch);
    }
    else
    {
        printf("ÄãÊäÈëµÄÊÇ¿Õ´®\n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    char c;
    c=getchar();
    while(c!='\0')
    {
        c=c-('a'-'A');
        putchar(c);
        c=getchar();
    }
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100]={'0'};
    int i=0;
    fgets(ch,100,stdin);
    for(i=0;ch[i] !='\0';i++)
    printf("%c\n",ch[i]);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char a[100];
    int i=0;
    gets(a);
    a[0]=a[0]-32;
    for(i=1;i<100;i++)
    {
    if(i>=1&&a[i]>='A'&&a[i]<='Z')
    {
        a[i]=a[i]+32;

    }
    }
    printf("%s\n",a);
    return 0;

}*/
/*#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{
    char stuid[10],name[20];
    float score;
    FILE * outfile;
    int i;
    outfile=fopen("scores.txt","w");
    if (outfile==NULL)
    {
        printf("不能创建文件！");
        exit(0);
    }
    fprintf(outfile,"学号\t姓名\t入学成绩\n");
    for(i=0;i<N;i++)
    {
        printf("请输入学生学号、姓名和入学成绩（空格分开）:");
        scanf("%s%s%f",stuid,name,&score);
        fprintf(outfile,"%s\t%s\t%f\n",stuid,name,score);
    }
    fclose(outfile);
    return 0;
}*/
#include<stdio.h>
int main()
{
    FILE * outfile;
    char line[100];
    outfile=fopen("scores.txt","r");
    if (outfile==NULL)
    {
        perror("Error opening outfile");
        return 1;
    }
    while (fgets(line,sizeof(line),outfile))
    {
        printf("%s",line);
    }
    if(ferror(outfile))
    {
        perror("Error reading outfile");
    }

    fclose(outfile);
    return 0;
}
