#include <stdio.h>

void swap(int a, int b);
void _swap(int *m, int *n);

int main()
{
    int x = 3;
    int y = 5;

    // Call by value
    swap(x, y);
    printf("After call by value: x = %d, y = %d\n", x, y);

    // Call by reference
    _swap(&x, &y);
    printf("After call by reference: x = %d, y = %d\n", x, y);

    return 0;
}

// Call by value
void swap(int a, int b)
{
    printf("Inside swap (call by value) before swap: a = %d, b = %d\n", a, b);
    int t = a;
    a = b;
    b = t;
    printf("Inside swap (call by value) after swap: a = %d, b = %d\n", a, b);
}

// Call by reference
void _swap(int *m, int *n)
{
    int t = *m;
    *m = *n;
    *n = t;
}
