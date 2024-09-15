#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *fptr;
    
    // Open the file in read mode ("r")
    fptr = fopen("dummy_text.txt", "r");
    
    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error: Unable to open file.\n");
        return 1; // Return an error code if the file couldn't be opened
    }

    // Declare a variable to hold each character read from the file
    char ch;

    // Read the first character from the file using fgetc
    ch = fgetc(fptr);

    // Loop through the file until the end of the file (EOF) is reached
    while (ch != EOF) {
        // Print the character to the console
        printf("%c", ch);
        
        // Read the next character from the file
        ch = fgetc(fptr);
    }

    // Print a newline after the file content is printed
    printf("\n");

    // Close the file to free resources and ensure all file operations are done
    fclose(fptr);

    // Return 0 to indicate the program executed successfully
    return 0;
}
