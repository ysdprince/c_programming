#include <stdio.h>
#include <string.h>

// Define a structure to store student information
struct student {
    int roll;       // Integer to store the roll number of the student
    float cgpa;     // Float to store the CGPA of the student
    char name[100]; // Character array to store the name of the student (max 100 characters)
};

int main() {
    // Declare a variable 's1' of type 'struct student'
    struct student s1;

    // Assign values to the fields of the structure
    s1.roll = 9;     // Set the roll number to 9
    s1.cgpa = 9.2;   // Set the CGPA to 9.2

    // Copy the string "Prince" into the 'name' field using strcpy
    // We can't assign directly to 'name' as it is an array
    strcpy(s1.name, "Prince");

    // Print the student's information using the structure fields
    printf("Student name is %s \n", s1.name);                  // Output the student's name
    printf("%s Roll no. is -> %d \n", s1.name, s1.roll);       // Output the student's roll number
    printf("%s CGPA is %f \n", s1.name, s1.cgpa);              // Output the student's CGPA

    return 0;  // Return 0 to indicate successful execution
}
