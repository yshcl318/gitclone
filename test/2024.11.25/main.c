#include<stdio.h>
double get_operand()
{
    double val;
    scanf("%lf", &val);
    return val;
}
char get_operator()
{
    char c = getchar();
    return c;
}
int prior(char op1, char op2)
{
    int flag;
    if (op1 == '*' || op2 == '/')
        if (op2 == '+' || op2 == '-')
            flag = 1;
        else
            flag = 0;
    else
        if (op2 == '+' || op2 == '-')
            flag = 0;
        else
            flag = -1;
    return flag;
}
double evaluate(double left, char op, double right)
{
    double result;
    switch (op)
    {
    case'+':result = left + right; break;
    case'-':result = left - right; break;
    case'*':result = left * right; break;
    case'/':
        if (right != 0)
        {
            result = left / right; break;
        }
        else
        {
            printf("非法运算！");
            exit(1);
        }
    }
}
int main()
{
    double value1, value2, value3, result;
    char op1, op2;
    printf("输入四则运算表达式:\n");
    value1 = get_operand();
    op1 = get_operator();
    if (op1 == '\n')
        result = value1;
    else
    {
        value2 = get_operand();
        while ((op2 = get_operator()) != '\n')
        {
            value3 = get_operand();
            if (prior(op2, op1) > 0)
                value2 = evaluate(value2, op1, value3);
            else
            {
                value1 = evaluate(value1, op1, value2);
                op1 = op2;
                value2 = value3;
            }
        }
        result = evaluate(value1, op1, value2);
    }
    printf("结果为:%f\n", result);
    return 0;
}
