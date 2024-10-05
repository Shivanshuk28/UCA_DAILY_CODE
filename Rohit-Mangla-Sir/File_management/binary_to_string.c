#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    FILE *file;
    
    // Step 1: Take user input
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    // Remove the newline character at the end of input if it exists
    input[strcspn(input, "\n")] = 0;

    // Step 2: Store the input as binary in a file
    file = fopen("binary_output.bin", "wb");  // Open file in binary write mode
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    
    fwrite(input, sizeof(char), strlen(input), file);  // Write the string to file in binary form
    fclose(file);
    
    printf("Input string stored as binary successfully.\n");

    // Step 3: Read the binary data back from the file
    char output[100];
    file = fopen("binary_output.bin", "rb");  // Open file in binary read mode
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(output, sizeof(char), strlen(input), file);  // Read the binary data from file
    output[strlen(input)] = '\0';  // Null-terminate the output string
    fclose(file);

    // Step 4: Output the binary data as text
    printf("The text read from binary file is: %s\n", output);

    return 0;
}
