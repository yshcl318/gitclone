/*#include <stdio.h>
#include <stdbool.h>

// ��������Ԫ��
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ��ת�����Ԫ��
void reverse(int *arr, int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

// ������һ������
bool next_permutation(int *arr, int n) {
    int i = n - 2;
    // �ҵ����� arr[i] < arr[i + 1] ������ i
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }
    if (i < 0) {
        return false;
    }
    int j = n - 1;
    // �ҵ����� arr[j] > arr[i] ������ j
    while (arr[j] <= arr[i]) {
        j--;
    }
    swap(&arr[i], &arr[j]);
    reverse(arr, i + 1, n - 1);
    return true;
}

int main() {
    int arr[] = {1, 2, 3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // ������֤����С�����п�ʼ
    // ��������ʼ��������С���У�������ǣ�����������
    do {

    } while (next_permutation(arr, n));
    return 0;
}
*/
#include <stdio.h>
#include <stdbool.h>
#include<math.h>
void swap(int* a,int* b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void r(int *arr,int s,int e)
{
    while(s<=e)
    {
        swap(&arr[s],&arr[e]);
        s++;
        e--;
    }
}
bool permutation(int* arr,int n)
{
    int i=n-2;
    while(i>=0&&arr[i]>=arr[i+1])
        i--;
    if(i<0)
        return 0;
    int j=n-1;
    while(arr[j]<=arr[i])
        j--;
    swap(&arr[i],&arr[j]);
    r(arr,i+1,n-1);
    return 1;
}
int main()
{
    int N,p=0;
    scanf("%d",&N);
    int i=0,j=0,x=0,y=0,z=0,k=0;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    do{
        x=0;
        for(i=0;i<=6;i++)
        {
            x=x*10+arr[i];
            y=0;
            for(j=i+1;j<=7;j++)
            {
                y=y*10+arr[j];
                z=0;
                for(k=j+1;k<=8;k++)
                {
                    z=z*10+arr[k];
                }
                if(y%z==0&&x+y/z==N)
                    p++;
            }
        }

    }while(permutation(arr,n));
    printf("%d",p);
    return 0;
}
