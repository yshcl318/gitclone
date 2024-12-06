/*#include <stdio.h>
#include <stdlib.h>

double getnum()
{
    double num;
    scanf("%lf", &num);
    return num;
}

char getopt()
{
    char c;
    do {
        c = getchar();
    } while (isspace(c));
    return c;
}

int prepare(char op1, char op2)
{
    int flag;
    if(op1 == '*' || op1 == '/')
        flag=1;
    else
    {
        if(op2 == '*' || op2 == '/')
            flag=0;
        else
            flag=1;
    }
     return flag;
}

double evaluate(double value1, char opt, double value2)
{
    double res = 0;
    switch(opt)
    {
        case'+':res = value1 + value2;
        break;
        case'-':res = value1 - value2;
        break;
        case'*':res = value1 * value2;
        break;
        case'/':
            if(value2 == 0)
            {
                printf("�Ƿ�������\n");
                exit(1);
            }
            else
                res = value1 / value2;
        break;
    }
    return res;
}

int main()
{
    double value1, value2, value3, result;
    char op1, op2;
    printf("����������������ʽ��\n");
    value1 = getnum();
    op1 = getopt();
    if(op1 == '\n')
        result = value1;
    else
    {
        value2 = getnum();
        while((op2 = getchar()) != '\n')
        {
            value3 = getnum();
            if(prepare(op1, op2) == 0)
                value2 = evaluate(value2, op2, value3);
            else
            {
                value1 = evaluate(value1, op1, value2);
                op1 = op2;
                value2 = value3;
            }
        }
        result = evaluate(value1, op1, value2);
    }
    printf("���Ϊ��%lf\n",result);

    return 0;
}

*/
#include <stdio.h>
#include<stdlib.h>
double getNum() {
	double num;
	scanf("%lf", &num);
	return num;
}
char getopt() {
	char c;
	do
    {
        c=getchar();
    }while(c==' ');
	return c;
}
int prepare(char op1,char op2) {
	int flag;
	if (op1 == '*' || op1 == '/')
		if (op2 == '+' || op2 == '-') flag = 1;
		else flag = 0;
	else
		if (op2 == '+' || op2 == '-') flag = 0;
		else flag = -1;

	return flag;
}
double evaluate(double value,char opt,double value2) {
	double res=0;
	switch (opt)
	{
	case '+': res = value + value2; break;
	case '-':res = value - value2; break;
	case '*':res = value * value2; break;
	case '/': if (value2 == 0) { printf("�Ƿ�������"); exit(1); }
			else res = value / value2;
	}
	return res;
}
int main(){
	double value1, value2, value3, result;
	char op1, op2;
	printf("����������������ʽ:");
	value1 = getNum();
	op1 = getopt();
	if (op1 == '\n')
	{
		result = value1;
	}
	else
	{
		value2 = getNum();
		while ((op2 = getopt()) != '\n')
		{
			value3 = getNum();
			if (prepare(op2, op1) > 0)
				value2 = evaluate(value2, op2, value3);
			else {
				value1 = evaluate(value1, op1, value2);
				op1 = op2;
				value2 = value3;
			}
		}
		result = evaluate(value1, op1, value2);
	}

	printf("�����:%lf", result);
	return 0;
}
