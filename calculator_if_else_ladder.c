#include<stdio.h>
int main()
{
int a,b,choice;
printf("Enter value of a & b");
scanf("%d%d",&a,&b);
printf("\n 1. Add");
printf("\n 2. Multiply");
printf("\n 3. Divide");
printf("\n 4. Mod");
printf("\n Enter your choice :");
scanf("%d",&choice);
if(choice==1)
printf("\n add %d",a+b);
    else if(choice==2)
    printf("\n Multiply %d",a*b);
        else if(choice==3)
        printf("\n Divide %d",a/b);
            else if(choice==4)
            printf("\n Mod %d",a%b);
            else
            printf("\n Invalid choice");

    return 0;
}