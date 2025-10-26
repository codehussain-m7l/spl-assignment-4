#include <stdio.h>

int main() {
    int start, end;  
    printf("Enter Start, End: ");
    scanf("%d %d", &start, &end);
    int i = start;

    do {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        }
        i++;  
    } while (i <= end);

    return 0;
}
