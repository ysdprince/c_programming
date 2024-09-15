#include <stdio.h>

// Function declaration
void square(int n);
void sq(int* f);

int main() {
    int number;
    number = 7;  // Initialize 'number' with 7
    
    // Function call to square using pass-by-value
    square(number);
    
    // Print the original number (will still be 7)
    printf("Number is %d \n", number);
    
    // Function call to square using pass-by-reference
    sq(&number);
    
    // Print the modified number (will now be 49)
    printf("sq Number is %d \n", number);
    
    return 0;
}

// Function definition to calculate and print the square of 'n'
void square(int n) {
    n = n * n;  // Calculate the square of 'n'
    printf("Square is %d\n", n);  // Print the square
}

// Function definition to calculate and print the square of 'f' using pointer
void sq(int* f) {
    *f = (*f) * (*f);  // Calculate the square of the value pointed to by 'f'
    printf("sq is %d\n", *f);  // Print the squared value
}
