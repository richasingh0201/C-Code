#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
printf("Total arguments: %d\n", argc);
for(int i = 0; i < argc; i++) {
printf("Argument %d: %s\n", i, argv[i]);
}
return 0;
}