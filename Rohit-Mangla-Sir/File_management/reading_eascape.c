#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
// int fgetc(FILE *stream);
    int ch = fgetc(file);
    printf("%d\n", ch);
    if (ch == '\n') {
        printf("Newline character found.\n");
    } else {
        printf("Character: %c\n", ch);
    }

    return 0;
}