#include <stdio.h>
int main() {
    for (int i = 1; i <= 10; i++) {
        
        if (i == 5) {
            continue;   
        }

        if (i == 8) {
            break;      
        }

        printf("%d\n", i);
    }

    return 0;
}





// skip number 5
// stop loop when number is 8