#include <stdio.h>

int main() {
    int marks[2][3]; // Declare a 2D array with 2 rows and 3 columns

    // Initialize the array
    marks[0][0] = 90;
    marks[0][1] = 85;
    marks[0][2] = 88;

    marks[1][0] = 97;
    marks[1][1] = 87;
    marks[1][2] = 89;

    // Print a specific element from the array
    printf("%d\n", marks[0][1]);

    return 0;
}
