#include <stdio.h>
int power(int b, int e) {
    
}
int main() {
    int base, exp, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter positive integer exponent: ");
    scanf("%d", &exp);

    result = power(base, exp);

    printf("%d^%d = %d\n", base, exp, result);

    return 0;
}