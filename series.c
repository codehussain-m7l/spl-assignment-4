#include<stdio.h>

int main() {
    int sum = 0, start, end, diff;
    printf("Enter Start, End and Difference: ");
    scanf("%d %d %d", &start, &end, &diff);

    for(int i = start; i <= end; i += diff) {
        sum += i;
        printf("%d ", i);
    }

    printf("Sum = %d", sum);

    return 0;
}