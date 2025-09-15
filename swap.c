//swap with 3 variables
#include<stdio.h>
int main()
{
int a=10, b=20,c;
printf("\n Before swap a=%d   b=%d",a,b);
c=a;//c is third variable to hold value of variable "a"
a=b;
b=c;
printf("\n After swap a=%d    b=%d",a,b);
    return 0;
}