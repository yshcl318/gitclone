#include <stdio.h>
void Rua();
int main() {
	Rua();//µ÷ÓÃµÝ¹éº¯Êý
	return 0;
}

void Rua() {
	/**********Begin**********/
	int a[100],i,j;
	for (i=0;scanf("%d ",&a[i])==1;i++);
	for(j=i;j>=0;j--)
    {
        printf("%d\n",a[j]);
    }
	/**********End**********/
}
