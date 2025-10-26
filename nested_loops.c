#include <stdio.h>

void print_asterisk(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    print_asterisk(num);

    return 0;
}

void print_asterisk(int num) {
    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= num; ++j) {
            printf("* ");  
        }
        printf("\n");  
    }

}