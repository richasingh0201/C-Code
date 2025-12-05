#include<stdio.h>
int main()
{
int i, m[10],sum=0,no_element; //array declaration of size 10
//reading array
for(i=0;i<10;i++)
{
printf(" Enter %dth value ",i);
scanf("%d",&m[i]);
}
printf("\n the vaues are :\n");
for(i=0;i<10;i++)
{    sum=sum+m[i];
    printf("\n %d",m[i]);
}

printf("\n Total sum = %d",sum);
no_element=sizeof(m)/sizeof(m[0]);//to find the no of elements in an array using sizeof
printf("\n Average = %.2f",(float)sum/no_element);
return 0;
}