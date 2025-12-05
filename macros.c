#include<stdio.h>
#define PI 3.14
#define SQUARE(x) (x)*(x)
int square(int x)
{
    return (x*x);
}
int main()
{
    printf("Result macro= %d\n",SQUARE(5+2));
    printf("Result function= %d\n",square(5+2));
   printf("\n %s", __DATE__);   // prints compile date
  printf("\n %s", __TIME__);   // prints compile time
  printf("\n %s", __FILE__);   // prints file name
}