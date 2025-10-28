#include <stdio.h>

int main() {
    const int SECRET_NUMBER = 3;
    int guess;

    printf("1 ile 5 arasında bir sayi tahmin ediniz: ");

    scanf("%d", &guess);

    if (guess == SECRET_NUMBER) {
        printf("\nDoğru sayı!\n", SECRET_NUMBER);
    } else {
        printf("\nYanlış tahmin!\n", SECRET_NUMBER);
    }

    return 0;
}
