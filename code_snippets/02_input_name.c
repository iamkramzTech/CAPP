#include <stdio.h>

int main(void) {
    char name[50];
    printf("Enter your name: ");
    scanf("%49s", name); // prevents buffer overflow
    printf("Hello, %s!\n", name);
    return 0;
}
