#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    int roll;
    float cgpa;
};
int main()
{
    // Declare an array of structures to store data for up to 100 students

    // student 1
    struct student students[100];
    students[0].roll = 32;
    students[0].cgpa = 8.9;
    strcpy(students[0].name, "ankit");
    printf("Student name is %s \n", students[0].name);
    printf("%s Roll no. is %d \n", students[0].name, students[0].roll);
    printf("%s CGPA is %f \n", students[0].name, students[0].cgpa);

    // student 2

    students[1].roll = 33;
    students[1].cgpa = 9.1;
    strcpy(students[1].name, "Modi ji");
    printf("Student name is %s \n", students[1].name);
    printf("%s Roll no. is %d \n", students[1].name, students[1].roll);
    printf("%s CGPA is %f \n", students[1].name, students[1].cgpa);
    return 0;
}