#include<stdio.h>
int main()
{    
    FILE *fp = fopen("test.txt", "r");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 0;
    }
    int ch;
    while ((ch = fgetc(fp)) != EOF) 
        printf("%c", ch); 
if(feof(fp))
    printf("\nEnd of file reached.");
return 0;
}