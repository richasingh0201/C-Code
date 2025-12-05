#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "a");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 0;
    }
    fprintf(fp, "\nNew line added using append mode.");
    fclose(fp);
    return 0;
}
