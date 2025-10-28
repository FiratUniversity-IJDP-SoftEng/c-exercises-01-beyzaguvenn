#include <stdio.h>

int main() {
    const int SECRET_NUMBER = 3;
    int guess;

    printf("Guess a number between 1 and 5: ");

    scanf("%d", &guess);

    if (guess == SECRET_NUMBER) {
        printf("\nTrue!\n", SECRET_NUMBER);
    } else {
        printf("\nFalse!\n", SECRET_NUMBER);
    }

    return 0;
}
