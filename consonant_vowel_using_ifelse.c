#include <stdio.h>
#include <ctype.h>   // for tolower()

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Convert to lowercase to handle both cases
    ch = tolower(ch);

    if (ch >= 'a' && ch <= 'z') {
        // Check vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a Vowel.\n", ch);
        } else {
            printf("%c is a Consonant.\n", ch);
        }
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}
