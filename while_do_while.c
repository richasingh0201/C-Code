//comparing while & do while
#include<stdio.h>
int main()
{
    int i=-1;
    //while loop entry control
    while(i>=10)
    {
        printf("\n Never Entered while loop with value of i =%d",i);
        i++;
    }
    //do while exit control loop
        {
        printf("\n Entered do while loop atleast for once with value of i =%d",i);
        i++;
    }while(i>=10);
return 0;

}
