/*
Print the number from 0 to n , if n is the given by the user
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int i = 0;
    while (i <= n)
    {
        printf("%d \n",i);
        i++;
    }
    return 0;
}