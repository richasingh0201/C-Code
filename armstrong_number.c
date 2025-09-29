//Implementation of extracting digits from number 
//armstrong number

#include<stdio.h>
#include<math.h>
int main()
{
    int num,rev=0,rem,copy,count=0,arm=0;
    printf("\n Enter number to be checked for Armstrong Number: ");
    scanf("%d",&num);

    copy=num; //always preserve a copy incase you need it for comparison
    
    //int c=printf("%d",num);  this will also give no of digits
    
    while(num>0)
        {
            count++;
            num=num/10;
        }
        num=copy;//restore the value of num since it become zero
        
    while(num>0)
        {
            rem=num%10;
            arm=arm+ceil(pow(rem,count)); //included ceil function to handle double returned by pow function, in some version it creates discrepency
            num=num/10;
        }

//Check Armstrong Number

        if(copy==arm)
        printf("\n It's an Armstrong Number");
        else
        printf("\n It's not an Armstrong Number");

    return 0;
}