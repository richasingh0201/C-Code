//A data analytics tool finds the minimum sales figure from multiple entries.
//Implement a solution to accept ‘n’ numbers and display the largest.
#include<stdio.h>
int main()
{
int n,i,sales,min_sales;
//read how many sales
printf("\n Enter total number of sales : ");
scanf("%d",&n);

//read first sales figure to start with
printf("\n Enter sales figure :");
scanf("%d",&sales);
min_sales=sales;

//loop to read sales figure for n-1 times ie i=2
for(i=2;i<=n;i++)
{
    printf("\n Enter sales figure :");
    scanf("%d",&sales);
    if(min_sales>sales)
        {
            min_sales=sales;
        }
}
//print greater salary
printf("\n Least sales figure is : %d",min_sales);
return 0;
}