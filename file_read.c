#include <stdio.h>
int main() {
FILE *fp = fopen("test.txt", "r");
if(fp == NULL){
printf("File not found!\n");
return 0;
}
char line[100];
printf("\n file ptr position befor read %ld\n",ftell(fp));
while(fgets(line, sizeof(line), fp)){
    
    printf("\n file ptr position %ld",ftell(fp));
    fseek(fp,-5,SEEK_CUR);
printf("\n %s", line);
}
fclose(fp);
return 0;
}