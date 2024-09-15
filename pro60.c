#include <stdio.h>
#include <string.h>

// Define a structure to store student information
struct student {
    int roll;       // Integer to store the roll number of the student
    float cgpa;     // Float to store the CGPA of the student
    char name[100]; // Character array to store the name of the student (max 100 characters)
};

int main() {
    // Declare an array of structures to store data for 3 students
    struct student students[3];

    // Assign values to the first student's fields
    students[0].roll = 9;
    students[0].cgpa = 9.2;
    strcpy(students[0].name, "Prince");

    // Assign values to the second student's fields
    students[1].roll = 10;
    students[1].cgpa = 8.2;
    strcpy(students[1].name, "Navin");

    // Assign values to the third student's fields
    students[2].roll = 11;
    students[2].cgpa = 8.9;
    strcpy(students[2].name, "Ravi");

    // Loop through the array and print the students' information
    for (int i = 0; i < 3; i++) {
        printf("Student %d name is %s \n", i + 1, students[i].name);     // Output the student's name
        printf("%s Roll no. is -> %d \n", students[i].name, students[i].roll); // Output the student's roll number
        printf("%s CGPA is %f \n", students[i].name, students[i].cgpa);  // Output the student's CGPA
    }

    return 0;  // Return 0 to indicate successful execution
}
