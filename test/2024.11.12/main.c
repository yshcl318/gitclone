#include <stdio.h>
int main() {
	char num[100];
	int pre=0;
	int last = 0;
	int length=0;

	printf("请输入任意位数的数字:");
	fgets(num,100,stdin);   //读取字符串
	int i,j;
	for (i = 0; num[i] != '\n'; i++)  //判断位数
	{
		last++;
	}

	length = last;  //长度为last
	for (pre=0; pre < length/2 ; pre++,last--)
	{
		char temp = num[pre];
		num[pre] = num[last-1];
		num[last-1] = temp;
	}

	for (j = 0; num[j] != '\n'; j++)
	{
		printf("%d", num[j]-'0');
	}
	return 0;
}
