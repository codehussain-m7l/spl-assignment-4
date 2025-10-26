#include <stdio.h>

int square(int num);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The square of %d is %d.\n", number, square(number));

    return 0;
}

int square(int num) {
    return num * num;
}