/*
print the sum of n natural number
also print them in revers
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    int sum;
    sum = 0;
    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        sum = sum + i;
        printf("Revers: %d \n", j);
    }
    printf("Sum  %d \n", sum);

    /*
     Print numbers in reverse order

      for (int j = n; j >= 1; j--) {
        printf("Reverse: %d \n", j);

    }
    */

    return 0;
}