/*#include <stdio.h>
void Rua();
int main() {
	Rua();//µ÷ÓÃµÝ¹éº¯Êý
	return 0;
}

void Rua() {

	int a[100],i,j;
	for (i=0;scanf("%d",&a[i])==1;i++);
	for(j=i-1;j>=0;j--)
    {
        printf("%d\n",a[j]);
    }

}*/
#include <stdio.h>
int ack(int, int);
int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	printf("%d", ack(m, n));
	return 0;
}

int ack(int m, int n) {
	if(m==0)
        return n+1;
    else if(m>0&&n==0)
        return ack(m-1,1);
    else if(m>0&&n>0)
        return ack(m-1,ack(m,n-1));

}
