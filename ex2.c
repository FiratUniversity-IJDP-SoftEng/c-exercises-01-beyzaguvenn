#include <stdio.h>
int main() {
    int age;
    int i;  

printf("Enter your age: ");

scanf("%d", &age);

    for (i = 0; i < age; i++) {
        printf("Happy Birthday!\n");
    }
    return 0;
}
