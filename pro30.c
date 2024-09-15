// use library fiunction to claculate the square of a number given by the user

#include <stdio.h>
#include <math.h> // Include the math library for mathematical functions

int main()
{
    float number;                 // Variable to store the user input
    printf("Enter the number: "); // Prompt the user for input
    scanf("%f", &number);         // Read the user input

    // Calculate the square using the pow function
    float square = pow(number, 2);

    // Print the result with two decimal places for better readability
    printf("The square of %.2f is %.2f\n", number, square);
    // here fisrt %.2f is stored number value and second %.2f is store square value or \n use for next line

    return 0;
}
