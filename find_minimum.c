#include <stdio.h>

int smaller(int num1, int num2);

int main() {
    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    printf("The smaller number between %d and %d is %d.\n", number1, number2, smaller(number1, number2));

    return 0;
}

int smaller(int num1, int num2) {
    if (num1 < num2) {
        return num1;  
    } else {
        return num2;  
    }
}