#include <stdio.h>
int main()
{
    int age;
    printf("Please Enter Your Age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Adult \n");
    }
    else if (age > 13 && age < 18)
    {
        printf("teenager \n");
    }
    else
    {
        printf("child \n");
    }

    return 0;
}