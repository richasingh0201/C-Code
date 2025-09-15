//while loop to print 10 9 8 7 6 5 4 3 2 1
#include<stdio.h>
int main()
{
    int i=10;
        while(i>=1)
        {
        printf("\n i =%d",i);
        i--;
    }
    printf("\n Value i is %d outside loop",i);
    return 0;
}