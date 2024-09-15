#include <stdio.h>
#include <string.h>

// Define a structure to store student information
struct student
{
    int roll;      // Integer to store the roll number of the student
    float cgpa;    // Float to store the CGPA of the student
    char name[50]; // Character array to store the name of the student (max 50 characters)
};

int main()
{
    // Initialize a structure instance with values
    struct student s1 = {32, 9.1, "modi ji"};

    // Create a pointer to the structure and assign it the address of s1
    struct student *ptr = &s1;

    // Access and print the roll number using the pointer and the arrow operator
    printf("Student Roll no. is -->  %d\n", ptr->roll);

    return 0; // Return 0 to indicate successful execution
}
