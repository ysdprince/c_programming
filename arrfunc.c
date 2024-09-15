#include <stdio.h>

void printnumbers(int arr[], int n); // Function prototype

int main() {
    int arr [] = {6, 5, 4, 3, 2, 1};  // Initialize array with 6 elements
    printnumbers(arr, 6);  // Call the function with the array and its size

    return 0;
}

void printnumbers(int arr[], int n) {  // Function definition
    for (int i = 0; i < n; i++) {  // Loop through the array
        printf("%d \t", arr[i]);  // Print each element followed by a tab
    }
    printf("\n");  // Print a newline at the end
}



// #include <stdio.h>


// // Function prototype
// void printnumbers(int *arr, int n);

// int main() {
//     // Initialize an array with 6 elements
//     int arr[] = {6, 5, 4, 3, 2, 1};

//     // Call the function with the array and its size
//     printnumbers(arr, 6);

//     return 0;
// }

// // Function definition
// void printnumbers(int *arr, int n) {
//     // Loop through the array
//     for (int i = 0; i < n; i++) {
//         // Print each element followed by a tab
//         printf("%d \t", arr[i]);
//     }
//     // Print a newline at the end
//     printf("\n");
// }
