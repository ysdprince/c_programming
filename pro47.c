#include <stdio.h>

int main() {
    int arr[] = {5, 4, 3, 2, 1}; // Initialize array with 5 elements

    // Access and print elements using pointer arithmetic
    printf("%d \n", *(arr + 2)); // Access the element at index 2
    printf("%d \n", *(arr + 1)); // Access the element at index 1
    printf("%d \n", *(arr + 5)); // Access the element at index 5 (out of bounds)

    return 0;
}
