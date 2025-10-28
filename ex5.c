#include <stdio.h>

void sayHello(const char *name);

int main() {
    char name[50]; 

    printf("Enter your name: ");
scanf("%s", name);

    sayHello(name);

    return 0;
}

void sayHello(const char *name) {
    printf("Hello, %s\n", name);
}
