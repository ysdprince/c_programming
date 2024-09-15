#include <stdio.h>  // Include the standard input/output library

int main() {
    char name[100];  // Declare a character array (string) to store the user's input, with a maximum size of 100 characters
    
    gets(name);  // Read a line of text from the standard input (stdin) and store it in the 'name' array
                 // Note: 'gets()' is unsafe and not recommended due to the risk of buffer overflow

    puts(name);  // Output the string stored in 'name' to the standard output (stdout)
    
    return 0;    // Return 0 to indicate that the program finished successfully
}
