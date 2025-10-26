#include <stdio.h>

int main() {
    char input;

    printf("Enter a digit (0-9): ");
    scanf("%c", &input);

    if (input >= '0' && input <= '9') {
        printf("You entered a valid digit: %c\n", input);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}