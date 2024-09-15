#include <stdio.h>

int main() {
    int *ptr;  // Declare an integer pointer
    int x;     // Declare an integer variable

    ptr = &x;  // Initialize pointer 'ptr' to point to the address of 'x'
    
    x = 0;     // Initialize 'x' with 0
    
    printf("*ptr = %d \n", *ptr);  // Print the value pointed to by 'ptr' (which is 0)
    printf("x = %d \n", x);        // Print the value of 'x' (which is 0)

    *ptr += 5;  // Increment the value pointed to by 'ptr' (which modifies 'x') by 5
    printf("%d \n", *ptr);  // Print the updated value pointed to by 'ptr' (which is now 5)
    printf("x = %d \n", x); // Print the updated value of 'x' (which is now 5)

    (*ptr)++;  // Increment the value pointed to by 'ptr' (which modifies 'x') by 1
    printf("%d \n", *ptr);  // Print the incremented value pointed to by 'ptr' (which is now 6)
    printf("x = %d \n", x); // Print the incremented value of 'x' (which is now 6)

    return 0;
}
