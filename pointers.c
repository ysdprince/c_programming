// pointers
#include <stdio.h>

int main() {
    int age;        // Declare an integer variable 'age'
    age = 22;       // Initialize 'age' with the value 22
    
    int *ptr = &age;  // Declare a pointer 'ptr' and assign it the address of 'age'
    
    int nv_age = *ptr;  // Dereference the pointer 'ptr' to get the value of 'age' and assign it to 'nv_age'
    
    printf("%d \n", nv_age);  // Print the value of 'nv_age' (22)
    
    // Print the address of 'age' using different format specifiers
    printf("%p\n", &age);  // Print the address of 'age' in hexadecimal format
    printf("%u\n", (unsigned int)&age);  // Print the address of 'age' in unsigned integer format
    
    // Print the address of 'ptr' (the pointer variable itself) using different format specifiers
    printf("%p\n", (void*)&ptr);  // Print the address of 'ptr' in hexadecimal format
    printf("%u\n", (unsigned int)(void*)&ptr);  // Print the address of 'ptr' in unsigned integer format
    
    // Print the value stored in 'ptr' (which is the address of 'age')
    printf("%p\n", ptr);  // Print the address stored in 'ptr' (same as '&age') in hexadecimal format
    printf("%u\n", (unsigned int)ptr);  // Print the address stored in 'ptr' in unsigned integer format
    
    // Print the value of 'age' directly and via dereferencing the pointer 'ptr'
    printf("%d \n", age);  // Print the value of 'age' (22)
    printf("%d \n", *ptr);  // Dereference 'ptr' to print the value of 'age' (22)
    printf("%d \n", *(&age));  // Dereference the address of 'age' to print its value (22)
    
    return 0;
}
