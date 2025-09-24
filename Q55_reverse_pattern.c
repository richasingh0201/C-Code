//Q55. A digital board displays reverse seating layouts for events. Implement a solution to print:
//5 4 3 2 1
//5 4 3 2
//5 4 3
//5 4
//5
//A printing press needs to repeat labels in a fixed tabular layout. Implement a solution to display:
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
#include<stdio.h>
int main()
{
    int i,j;
    //outer loop of i for rows or lines
    for(i=1;i<=5;i++)
        {
            //inner loop of j for values in each rows or lines
            for(j=5;j>=i;j--)
            {
                printf("%d",j);
            } //end of inner loop
            printf("\n"); //move to new line after every row/line
        }//end of outer loop
return 0;
    }