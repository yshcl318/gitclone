#include <stdio.h>
int main() {
	char num[100];
	int pre=0;
	int last = 0;
	int length=0;

	printf("����������λ��������:");
	fgets(num,100,stdin);   //��ȡ�ַ���
	int i,j;
	for (i = 0; num[i] != '\n'; i++)  //�ж�λ��
	{
		last++;
	}

	length = last;  //����Ϊlast
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
