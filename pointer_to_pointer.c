// #include <stdio.h>
// int main(){
//     int price=100;
//     int *ptr=&price;
//     int **pptr=*ptr;
//     printf("%d",**pptr);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int price = 100;   // Declare and initialize an integer variable 'price' with the value 100
    int *ptr = &price; // Declare a pointer 'ptr' that stores the address of 'price'
    int **pptr = &ptr; // Declare a double pointer 'pptr' that stores the address of 'ptr'

    // Print the value of 'price' using double pointer dereferencing
    printf("Value of price using double pointer dereference: %d\n", **pptr);

    // Print additional details for better understanding
    printf("Address of price: %p\n", (void *)&price);
    printf("Value stored in ptr (Address of price): %p\n", (void *)ptr);
    printf("Address of ptr: %p\n", (void *)&ptr);
    printf("Value stored in pptr (Address of ptr): %p\n", (void *)pptr);
    printf("Value of price using single pointer dereference: %d\n", *ptr);

    return 0;
}
