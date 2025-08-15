#include <stdio.h>

int main(void) {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are underage.\n");
    }
    return 0;
}
