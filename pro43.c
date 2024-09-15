#include <stdio.h>

// we can also subtract one pointer from another

int main() {
    int age;
    age = 22;
    int *ptr;
    ptr = &age; // Assign the address of 'age' to 'ptr'
    
    printf("ptr = %p \n", (void*)ptr); // Print the address held by 'ptr'
    
    ptr++; // Increment the pointer to point to the next integer memory location
    printf("ptr++ = %p \n", (void*)ptr); // Print the incremented pointer address
    
    ptr--; // Decrement the pointer to go back to the original address
    printf("ptr-- = %p \n", (void*)ptr); // Print the decremented pointer address
    // float

    float price;
    price = 100.0;
    float *ctr;
    ctr = &price; // Assign the address of 'price' to 'ctr'
    
    printf("ctr = %p \n", (void*)ctr); // Print the address held by 'ctr'
    
    ctr++; // Increment the pointer to point to the next float memory location
    printf("ctr++ = %p \n", (void*)ctr); // Print the incremented pointer address
    
    ctr--; // Decrement the pointer to go back to the original address
    printf("ctr-- = %p \n", (void*)ctr); // Print the decremented pointer address

    // chararcter

      char star;
    star = '*';
    char *mtr;
    mtr = &star; // Assign the address of 'price' to 'ctr'
    
    printf("mtr = %p \n", (void*)mtr); // Print the address held by 'ctr'
    
    mtr++; // Increment the pointer to point to the next float memory location
    printf("mtr++ = %p \n", (void*)mtr); // Print the incremented pointer address
    
    mtr--; // Decrement the pointer to go back to the original address
    printf("mtr-- = %p \n", (void*)mtr); // Print the decremented pointer address
    
    return 0;
}
