// print sum of n natural number

#include <stdio.h>

// Function prototype for calculating sum
int sum(int n);

int main()
{
    int a; // Variable to store user input

    // Prompt user for input
    printf("Enter the value of n: ");
    scanf("%d", &a);

    // Calculate and display the sum
    printf("The sum of the first %d natural numbers is: %d\n", a, sum(a));

    return 0;
}

// Recursive function to calculate the sum of the first n natural numbers
int sum(int n)
{
    if (n == 1)
    { // Base case: if n is 1, return 1
        return 1;
    }

    // Recursive call to calculate the sum of the first (n-1) natural numbers
    int partialSum = sum(n - 1);

    // Add the current number n to the sum obtained from the recursive call
    int finalsum = partialSum + n;
    return finalsum;
}
