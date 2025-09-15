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
switch(choice)
{
case 1:
printf("\n add %d",a+b);
break;
case 2:
printf("\n Multiply %d",a*b);
break;
case 3:
printf("\n divide %d",a/b);
break;
case 4:
printf("\n mod %d",a%b);
break;
default:
printf("\n Invalid choice");
}

return 0;
}







