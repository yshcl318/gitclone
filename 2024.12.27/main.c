/*#include<stdio.h>
int main()
{
    int n,k,s=1,t,sum=0;
    scanf("%d %d",&n,&k);
    t=n;
    sum=n;
    while(s>0)
    {
        s=t/k;
        t=n%k+s;
        sum+=s;
    }
    printf("%d",sum);
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char arr[100];
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    fgets(arr,100,stdin);
    int N=sizeof(arr)/sizeof(arr[0]);
    for(int I=0;I<=N;I++)
    {
        switch(arr[I])
        {
            case 'a':a++;break;
            case 'b':b++;break;
            case 'c':c++;break;
            case 'd':d++;break;
            case 'e':e++;break;
            case 'f':f++;break;
            case 'g':g++;break;
            case 'h':h++;break;
            case 'i':i++;break;
            case 'j':j++;break;
            case 'k':k++;break;
            case 'l':l++;break;
            case 'm':m++;break;
            case 'n':n++;break;
            case 'o':o++;break;
            case 'p':p++;break;
            case 'q':q++;break;
            case 'r':r++;break;
            case 's':s++;break;
            case 't':t++;break;
            case 'u':u++;break;
            case 'v':v++;break;
            case 'w':w++;break;
            case 'x':x++;break;
            case 'y':y++;break;
            case 'z':z++;break;

        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z);
    return 0;
}
