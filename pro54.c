#include <stdio.h>

// Function to count the length of a string (excluding the null terminator and newline)
int countlength(char arr[]);

int main() {
    char name[100];  // Declare a character array to store the user's name
    
    // Prompt the user to enter their name
    printf("Enter your name: ");
    
    // Use fgets to read the user's input, including spaces, into the 'name' array
    // The size of the array is 100, so fgets will read up to 99 characters plus the null terminator
    fgets(name, 100, stdin);
    
    // Call the countlength function and print the length of the name
    printf("Length is %d\n", countlength(name));
    
    return 0;
}

// Function to calculate the length of the string
int countlength(char arr[]) {
    int count = 0;  // Initialize a counter to 0
    
    // Loop through each character in the array until the null terminator ('\0') is encountered
    for (int i = 0; arr[i] != '\0'; i++) {
        count++;  // Increment the counter for each character
    }
    
    // Return the count minus 1 to exclude the newline character
    // fgets() includes the newline character when the user presses Enter
    return count - 1;
}
