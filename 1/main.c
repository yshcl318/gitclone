//#include <stdio.h>

//int main()
//{
//    int x,y,z,v;
//    printf("输入两个数:");
//    scanf("%d%d",&x,&y);
//    if (x>y){
//        z=x-y;
//        printf("%d,%d\n",x,z);
//    }
//    else {
//        v=y-x;
//        printf("%d,%d\n",y,v);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main(){
//    int a;
//    scanf ("%d",&a);
//    if (a%4==0&&a%100!=0){
//        printf("1");
//        }
//    else if(a%400==0){
//        printf("1");
//        }
//    else if (a%4!=0){
//            printf("0");
//            return 0;
//        }
//    else if(a%4==0&&a%100==0){
//        printf("0");
//    }
//        return 0;
//}
//#include<stdio.h>
//int main(){
//    int a,b,f,i,j;
//    char c;
//    scanf("%d %d %c %d",&a,&b,&c,&f);
//    for(i=1;i<=a;i++){
//        for(j=1;j<=b;j++){
//            if(i==1||i==a||j==1||j==b){
//            printf("%c",c);}
//            else{
//                printf("%c",f==0?' ':c);}
//        }
//        printf("\n");
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int a,i,a1=1,a2=1,an;
//    scanf("%d",&a);
//    for (i=1;i<=a;i++){
//        if (i<=2){
//                an=1;
//        }
//        else {
//         an=a1+a2;
//         a1=a2;
//         a2=an;}
//    }
//    printf("%d\n",an);
//    return 0;
//}
/*#include<stdio.h>
int main()
{
    int a,b,f,i,j;
    char c;
    scanf("%d%d%c%d",a,b,c,f);
    for (i=1;j<=b;j++){
        printf("%c",c);
    }
    for (i=2;i<=a-1;i++){
        for (j=1;j<=b;j++){
        if (j==1||j==b){
            printf("%c",c);
        }
       else if (f!=0){
        printf("%c",c);
       }
       else {
        printf("%c",' ');}
       }
    }
    for (j=1;j<=b;j++){
        printf("%c",c);
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a;
    while (scanf("%d",&a)==1)
    {
        int b,a1=1,a2=1,an;
        for (b=1;b<=a;b++){
                if (b<=2){
            an=1;
        }
      else{
        an=a1+a2;
        a1=a2;
        a2=an;
        }
    }
    printf("%d\n",an);
    }
    return 0;
}*/
/*#include<stdio.h>
int a[101];
int main()
{
    int b=0;
    scanf("%d",&a[b]);
    while (a[b]!=0){
        b=b+1;
        scanf ("%d",&a[b]);}
    for(int i=b-1;i>=0;i--)
        printf("%d%c",a[i],' ');
        return 0;

}*/
/*#include<stdio.h>
int b[1400];
int main()
{
    int a,c=0;
    scanf("%d",&a);
    b[c]=a;
    while (a!=1){
    if(a%2==0){
        a=a/2;
        }
    else {
        a=a*3+1;
        }
        c++;
        b[c]=a;
        }
        for (int s=c;s>=0;s--){
        printf("%d%c",b[s],' ');}

    return 0;
}*/
/*#include<stdio.h>
int trre[10010];
int main ()
{
    int l,m,u,v,s;
    scanf ("%d%d",&l,&m);
    for (int i=0;i<=l;i++)
    {
        trre[i]=0;
    }
    for (int i=0;i<m;i++){
            scanf ("%d%d",&u,&v);
        for(int j=u;j<=v;j++)
        {
            trre[j] = 1;
        }}
        for (int i=0;i<=l;i++)
        {
            if (trre[i]==0)
            s++;
        }
    printf("%d",s);
    return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int i,l;
    scanf ("%s",&arr);
    l=strlen(arr);
    for(i=0;i<l;i++)
    {
        if(arr[i]>='a'&&arr[i]<='z')
        {
            arr[i]=arr[i]-32;
        }
        else
        {
            arr[i]=arr[i];
        }
    }
        printf("%s",arr);
    return 0;
}
