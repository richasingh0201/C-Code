#include<stdio.h>
#include<stdlib.h>
int main()
{
int *marks;
int n,i;
printf("\n Enter the no of users:");
scanf("%d",&n);
marks=(int*)malloc(n*sizeof(int));
//marks=(int*)calloc(n,sizeof(int));
for(i=0;i<n;i++)
{   printf("\n Enter marks for %dth student",i);
    scanf("%d",&marks[i]);

}
for(i=0;i<n;i++)
{   printf("\n Marks for %dth student = %d",i,marks[i]);
}
free(marks);
    return 0;
}