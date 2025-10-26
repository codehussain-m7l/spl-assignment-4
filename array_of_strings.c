#include <stdio.h>

int main() {
    char *strings[] = {
        "Hello",
        "World",
        "C Programming",
        "Array of Strings"
    };

    int num_strings = sizeof(strings) / sizeof(strings[0]);

    for (int i = 0; i < num_strings; i++) {
        printf("String %d: %s\n", i + 1, strings[i]);
    }

    return 0;
}