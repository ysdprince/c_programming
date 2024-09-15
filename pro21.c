/*
print the factorial of a number n
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int fact;
    fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial value : %d \n", fact);
    return 0;
}