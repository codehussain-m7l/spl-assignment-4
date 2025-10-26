#include <stdio.h>

int main() {
    char str[30];
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; str[i] != '\0'; i++) {
        str[i]++;  
    }
    
    printf("Incremented String: %s\n", str);
    
    return 0;
}