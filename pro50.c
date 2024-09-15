// create a 2D array storing the table of 2 & 3

#include <stdio.h>

// Function to store the multiplication table of a given number in a 2D array
void storetable(int arr[][10], int row, int cols, int number);

int main()
{
    int tables[2][10]; // 2D array to store tables of 2 and 3

    storetable(tables, 0, 10, 2); // Store the table of 2 in the first row
    storetable(tables, 1, 10, 3); // Store the table of 3 in the second row

    // Print the table of 2
    printf("Table of 2:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", tables[0][i]);
    }
    printf("\n");

    // Print the table of 3
    printf("Table of 3:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", tables[1][i]);
    }
    printf("\n");

    return 0;
}

void storetable(int arr[][10], int row, int cols, int number)
{
    for (int i = 0; i < cols; i++)
    {
        arr[row][i] = number * (i + 1); // Correct multiplication logic

        // This function is responsible for filling in one row of the tables array with the multiplication table of a given number.
        // for (int i = 0; i < cols; i++) is a loop that runs 10 times, one for each number in the table (like 21, 22, etc.).
        // arr[row][i] = number * (i + 1); calculates the multiplication and stores the result in the correct spot in the array.
        // Summary
        // 2D Array: We use a 2D array to hold the multiplication tables.
        // Function: We have a function that fills a specific row of this array with a multiplication table for a given number.
        // Printing: After storing the tables, we print them row by row.
    }
}
