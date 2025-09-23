//swap with 3 variables
#include<stdio.h>
int main()
{
int a=10, b=20,c;
printf("\n Before swap a=%d   b=%d",a,b);
//using addition & subtraction
a=a+b;
b=a-b;
a=a-b;
/*Using multiplication & division but applicable only for non Zero values
a=a*b;
b=b/a;
a=a/b;
*/
printf("\n After swap a=%d    b=%d",a,b);
    return 0;
}a