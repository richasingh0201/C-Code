#include <stdio.h>

int main() {
    char name[15];
    FILE *fp = fopen("test_check.txt", "a");
    if(fp == NULL){
        printf("File not created!\n");
        return 0;
    }
    int mode;
    printf("\n Enter ur name");
    fgets(name,sizeof(name),stdin);
    printf("Enter your mode :");
    scanf("%d",&mode);
    fprintf(fp, " mode=%d   name=%s \n",mode,name);
    fputs("Lets learn file handling in C.\n", fp);
    //fputc('A', fp);
    fclose(fp);
    printf("Data written successfully.");
    return 0;
}
