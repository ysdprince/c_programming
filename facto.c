#include <stdio.h>

int fact(int n);

int main() {
    int a; // Variable to store user input

    // Prompt user for input
    printf("Enter the value of n: ");
    scanf("%d", &a);

    // Display the factorial
    printf("The factorial of %d is: %d\n", a, fact(a));
    return 0;
}

int fact(int n) {
    if (n == 0) { // base case of this recursion
        return 1;
    }
    return n * fact(n - 1);
}
