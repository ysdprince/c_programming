#include <stdio.h>

// Function prototype
void print_hw(int count);

int main()
{
    print_hw(5); // Start the recursive printing with count set to 5
    return 0;
}

// Recursive function to print "Hello world" `count` times
void print_hw(int count)
{
    if (count == 0)
    { // Base case: stop recursion when count reaches 0
        return;
    }
    printf("Hello world\n"); // Print "Hello world"
    print_hw(count - 1);     // Recursive call with count decremented by 1
}
