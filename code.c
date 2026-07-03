#include <stdio.h>

int main() {
    int num;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nHello, %s!\n", name);
    printf("You entered: %d\n", num);

    return 0;
}