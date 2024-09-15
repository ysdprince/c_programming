#include <stdio.h>

int countodd(int arr[], int n); // Function prototype

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4};                        // Initialize array with 6 elements
    printf("Total odd numbers is %d\n", countodd(arr, 6)); // Call the function and print the result
    return 0;
}

int countodd(int arr[], int n)
{
    int count = 0; // Initialize counter for odd numbers
    for (int i = 0; i < n; i++)
    { // Loop through the array
        if (arr[i] % 2 != 0)
        {            // Check if the current element is odd
            count++; // Increment the counter if the element is odd
        }
    }
    return count; // Return the total count of odd numbers
}
