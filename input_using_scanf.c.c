//Read values of Marks, percentange & section
#include<stdio.h>
int main()
{
int m1;
float percent;
char section='A';
printf("Enter marks,\n percentage,\n section:");
scanf("%d%f",&m1,&percent);
printf("\n MArks are %d \n percentage=%f \n section=%c",m1,percent,section);
    return 0;
}