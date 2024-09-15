#include <stdio.h>
#include <string.h>

// Define a structure to store student information
struct student {
    char name[100];  // Character array to store the name of the student (max 100 characters)
    int roll;        // Integer to store the roll number of the student
    float cgpa;      // Float to store the CGPA of the student
};

// Function to print student information
void studentinfo(struct student s1);

int main() {
    // Initialize structure instances with values
    struct student s1 = {"Modi sarkar", 52, 8.9};
    struct student s2 = {"Yogi sarkar", 55, 8.8};
    struct student s3 = {0};  // s3 is initialized with default values (0 for roll and cgpa, empty string for name)

    // Print student information
    studentinfo(s1);
    // studentinfo(s2);

    return 0;
}

void studentinfo(struct student s1) {
    // Print student information
    printf("Student Information:\n");
    printf("Student Name: %s \n", s1.name);
    printf("Roll No: %d \n", s1.roll);
    printf("CGPA: %.2f \n", s1.cgpa);
    printf("----------------------------\n");
}
