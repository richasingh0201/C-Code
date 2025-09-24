//A data analytics tool finds the maximum sales figure from multiple entries.
//Implement a solution to accept ‘n’ numbers and display the largest.
#include<stdio.h>
int main()
{
int n,i,sales,max_sales;
//read how many sales
printf("\n Enter total number of sales : ");
scanf("%d",&n);

//read first sales to start with
printf("\n Enter sales figure :");
scanf("%d",&sales);
max_sales=sales;

//loop to read sales figure for n-1 times ie i=2
for(i=2;i<=n;i++)
{
    printf("\n Enter sales figure :");
    scanf("%d",&sales);
    if(max_sales>sales)
        {
            max_sales=sales;
        }
}
//print maximum sales figure
printf("\n MAximum sales figure is : %d",max_sales);
return 0;
}