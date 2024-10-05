#include <stdio.h>

int main() {
    int num = 42;
    double pi = 3.14159;
    char str[] = "Hello, stdout!";
    FILE *file = fopen("writing.txt", "w");

    fprintf(file, "Integer: %d\n", num);
    fprintf(file, "Floating-point: %f\n", pi);
    fprintf(file, "String: %s\n", str);

    return 0;
}