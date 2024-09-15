#include <stdio.h>
#include <string.h>  // pre define function

int main() {
    // Initialize a character array (string) with the value "Aman"
    char name[] = "Aman";
    
    // Calculate the length of the string using strlen
    // strlen returns the number of characters in the string excluding the null terminator
    printf("Length is %d\n", (char)strlen(name));  // Cast the result to int for correct format specifier
    
    return 0;
}
