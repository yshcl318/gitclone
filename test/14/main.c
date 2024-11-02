/*int my_sizeof(char*str)
{
    int count=0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}
#include<stdio.h>
int main()
{
    char arr[]="abc";
    size_t len=my_sizeof(arr);
    printf("%zd\n",len);
    return 0;
}*/
int my_sizeof(char*str)
{
    if(*str=='\0')
        return 0;
    else
        return 1+my_sizeof(str+1);
}
#include<stdio.h>
int main()
{
    char arr[]="abc";
    size_t len=my_sizeof(arr);
    printf("%zd\n",len);
    return 0;
}
