#include<stdio.h>
int main()
{
int no1,no2;
printf("Enter 2 nos:");
scanf("%d%d",&no1,&no2);
// Simple if else
/*if(no1>no2)
printf("\n no1 : %d is greater",no1);
else
printf("\n no2 : % is greater",no2);*/

//Using ternary/conditional operator for unequal values
//(no1>no2)?printf("\n no1 : %d is greater",no2):printf("\n no2 : %d is greater",no2);

// if else ladder
/*if(no1>no2)
printf("\n no1 : %d is greater",no1);
else if(no2>no1)
printf("\n no2 : % is greater",no2);
else if(no1>no2)
printf("\n no1 : %d is greater",no1);
else
printf("\n no1 & no2 are equal");*/

//Using ternary/conditional operator for unequal as well as equal values
(no1>no2)?printf("\n no1 : %d is greater",no2):(no2>no1)?printf("\n no2 : %d is greater",no2):(no1>no2)?printf("\n no1 : %d is greater",no2):printf("\n no1 & no2 are equal");
return 0;
}