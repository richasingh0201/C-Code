#include<stdio.h>
void print(int a[],int size)
{
printf("\n size of a :%d",sizeof(a));
}

int main()
{
    int i;
int arr[]={34,56,62,12,67};
printf("\n size of arr :%d",sizeof(arr));
print(arr,5);
    return 0;
}