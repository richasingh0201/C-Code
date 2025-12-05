#include<stdio.h>
int main()
{
int arr[5][3],r,c;
printf("\n Ente the values for an array\n");
for(r=0;r<5;r++)
{
    for(c=0;c<3;c++){
        printf("\n%d %d : ",r,c);
    scanf("%d",&arr[r][c]);
}

}
for(c=0;c<3;c++)
{printf("\n");
    for(r=0;r<5;r++){
    printf(" %d",arr[r][c]);
}

}
return 0;
}




