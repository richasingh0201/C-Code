//Implementation of extracting digits from number 
//armstrong number

#include<stdio.h>
#include<math.h>
int main()
{
    int row,rem,col,r,c;
    printf("\n Enter number for rows and columns");
    scanf("%d%d",&row,&col);

    for(r=0;r<row;r++)
    {
        for(c=0;c<col;c++)
        {
            if(r==0||r==row-1||c==0||c==col-1)//for first last row & first last col its *
                printf("*");
            else //otherwise we need space
                printf(" ");
        }
        printf("\n");

    }

    return 0;
}