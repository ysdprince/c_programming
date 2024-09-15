#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    float cgpa;
    char name[50];
};
int main()
{
    struct student s1 = {
        32, 9.1, "modi ji"};
        struct student *ptr = &s1;
    printf("Student ROll no. is -->  %d", (*ptr).roll);

    return 0;
}