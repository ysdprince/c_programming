#include <stdio.h>

void printstr(char arr[]);

int main() {
    char firstname[] = {"Prince"};
    char lastname[] = {"Singh"};
    
    printstr(firstname);
    printstr(lastname);
    
    return 0;
}

void printstr(char arr[]) {
    // Using a for loop
    for (int i = 0; arr[i] != '\0'; i++) {  // Loop until null terminator is reached
        printf("%c", arr[i]);
    }
    printf("\n");
}
