#include <stdio.h>
#include <string.h>
int main() {

    char pet_type[3];

    printf("Do you have a cat or a dog?");

    scanf("%s", pet_type);

    if (strcmp(pet_type, "cat") == 0) {
        printf("meow\n");
    } 
    else if (strcmp(pet_type, "dog") == 0) {
        printf("hav hav\n");
    } 
    else {
        printf("Type cat or dog\n");
    }
    return 0; // Başarılı program sonu
}

