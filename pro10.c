/*
Write a programe to give grades to a student
*/
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Your marks");
    scanf("%d", &marks);
    if (marks <= 30)
    {
        printf("grade - c \n");
    }
    else if (marks > 30 && marks <= 70)
    {
        printf("grade - B \n");
    }
    else if (marks > 70 && marks < 90)
    {
        printf("grade - A");
    }
    else if (marks > 90 && marks <= 100)
    {
        printf("grade - A+");
    }
    else
    {
        printf("Invalid marks");
    }
    return 0;
}