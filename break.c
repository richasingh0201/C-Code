#include <stdio.h>
int main() {
    int secret = 5, guess;

    printf("Guess the secret number between 1 and 10:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == secret) {
            printf("Correct! You found the number.\n");
            break;   // stop the loop immediately
        }
        printf("Wrong guess, try again.\n");
    }

    return 0;
}
