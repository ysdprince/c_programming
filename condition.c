#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Adult \n");
        printf("you Are Eligible For Apply Your Voting Card \n");
    }
    else
    {
        printf(" Not Adult \n");
        printf("Sorry You Can Not Apply For Voting Card \n");
    }
    return 0;
}