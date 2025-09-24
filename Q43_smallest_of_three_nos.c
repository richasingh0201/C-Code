//A quality check tool identifies the smallest defect dimension out of three measurements. Implement a
//solution to display the smallest of three numbers.
//assuming unequal values
# include<stdio.h>
int main()
{
float d1,d2,d3;
printf("\n Enter Dimension 1, Dimension 2 & Dimension 3: ");
scanf("%f%f%f",&d1,&d2,&d3);
    if(d1<d2 && d1<d3)
        printf("\n The smallest defect dimension is %.2f",d1);
            else if(d2<d1 && d2<d3)
                printf("\n The smallest defect dimension is %.2f",d2);
                else 
                    printf("\n The smallest defect dimension is %.2f",d3);
return 0;
}