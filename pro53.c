/*
Ask the user for their first name and print it back to them.

Also, try this with their full name.
*/

#include <stdio.h>

int main() {
    // Declare a character array to store the user's first name
    // char firstname[50];
    
    // Prompt the user to enter their first name
    // printf("Enter your first name: ");
    
    // Use scanf to read a single word (the first name) from the input
    // Note: scanf with %s reads until the first whitespace is encountered
    // scanf("%s", firstname);  
    
    // Print a greeting that includes the user's first name
    // printf("Oh hi %s\n", firstname);

    // Declare a character array to store the user's full name
    char fullname[100];
    
    // Prompt the user to enter their full name
    printf("Enter your full name: ");
    
    // Use fgets to read a line of text, which can include spaces, from the input
    // The size of the array and the input stream (stdin) are specified
    fgets(fullname, 100, stdin);
    
    // Print the full name back to the user
    printf("Nice to meet you, ");
    puts(fullname);
    
    return 0;
}
