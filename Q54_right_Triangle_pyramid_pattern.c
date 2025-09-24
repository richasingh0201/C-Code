//Q54. A classroom app displays number pyramids for practice worksheets. Implement a solution to print:
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
#include<stdio.h>
int main()
{
    int i,j;
    //outer loop of i for rows or lines
    for(i=1;i<=5;i++)
        {
            //inner loop of j for values in each rows or lines
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            } //end of inner loop
            printf("\n"); //move to new line after every row/line
        }//end of outer loop
return 0;
    }