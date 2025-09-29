//Implementation of extracting digits from number 
//reverse of the no
//armstrong number

#include<stdio.h>
int main()
{
    int num,rev=0,rem,copy;
    printf("\n Enter number to be reversed: ");
    scanf("%d",&num);
   copy=num; //always preserve a copy incase you need it for comparison
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem; //our basic math system to move from ones to tens to hundres n so on
        num=num/10;
    }
printf("\n Reverse of num is %d",rev);

//Check Palindrome 
if(copy==rev)
printf("\n It's a palindrome");
else
printf("\n It's not a palindrome");

    return 0;
}