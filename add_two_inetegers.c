#include<stdio.h>

int main() {
    int num1, num2, total;
    printf("Enter num1 and then num2: ");
    scanf("%d %d", &num1, &num2);

    total = num1 + num2;

    printf("The total of %d + %d is %d", num1, num2, total);

    return 0;
}