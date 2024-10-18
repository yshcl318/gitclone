/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}*/
#include<stdio.h>
#include<windows.h>
#include<string.h>
int main()
{
    char a[]="ifueiwbisuskna";
    char b[]="**************";
    int left=0;
    int right=strlen(b)-1;
    while(left<=right)
    {
        b[left]=a[left];
        b[right]=a[right];
        printf("%s",b);
        Sleep(1000);
        system("cls");
        left++;
        right--;
    }
    printf("%s",b);
    return 0;
}
