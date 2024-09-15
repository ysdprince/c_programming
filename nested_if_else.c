#include <stdio.h>
int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);
    if (num >= 0)
    {
        printf("Positive number \n");
        if (num % 2 == 0)
        {
            printf("Even Number \n");
        }
        else
        {
            printf("Odd number \n");
        }
    }
    else
    {
        printf("negative number \n");
    }
    return 0;
}