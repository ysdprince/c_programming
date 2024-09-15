//write a function to print n term of the fibonacci sequence
#include <stdio.h>

int fib(int n);

int main() {
    printf("%d", fib(9));
    return 0;
}

int fib(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    
    // Recursive case
    int fibnm1 = fib(n - 1);
    int fibnm2 = fib(n - 2);
    int fibn = fibnm1 + fibnm2;
    return fibn;
}
