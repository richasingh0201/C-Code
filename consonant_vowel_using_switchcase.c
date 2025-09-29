#include <stdio.h>
#include <ctype.h>   // for tolower()

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Convert to lowercase to using switch case
    ch = tolower(ch);

    if (ch >= 'a' && ch <= 'z') {
        switch(ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("\n %c is a Vowel.", ch);
                break;

            default:
                printf("\n %c is a Consonant.", ch);
        }
    } else {
        printf("\n It's an Invalid input. \n Please enter an alphabet.");
    }

    return 0;
}
