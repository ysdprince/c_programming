/* 
  you have to store the marks of 30 students in class 

  what will you use.?
  a. array of floats
  b.structure

*/

// using array of floats

#include <stdio.h>

int main() {
    float marks[30];

    // Manually input marks for each student
    printf("Enter marks for student 1: ");
    scanf("%f", &marks[0]);

    printf("Enter marks for student 2: ");
    scanf("%f", &marks[1]);

    printf("Enter marks for student 3: ");
    scanf("%f", &marks[2]);

    // Continue for all 30 students...

    printf("Enter marks for student 30: ");
    scanf("%f", &marks[29]);

    // Manually output the marks for each student
    printf("\nMarks of the students:\n");
    printf("Student 1: %.2f\n", marks[0]);
    printf("Student 2: %.2f\n", marks[1]);
    printf("Student 3: %.2f\n", marks[2]);

    // Continue for all 30 students...

    printf("Student 30: %.2f\n", marks[29]);

    return 0;
}


// using structure

// #include <stdio.h>

// struct Student {
//     char name[50];
//     int roll_no;
//     float marks;
// };

// int main() {
//     struct Student class[30];

//     // Manually input details for each student
//     printf("Enter details for student 1:\n");
//     printf("Name: ");
//     scanf("%s", class[0].name);
//     printf("Roll No: ");
//     scanf("%d", &class[0].roll_no);
//     printf("Marks: ");
//     scanf("%f", &class[0].marks);

//     printf("Enter details for student 2:\n");
//     printf("Name: ");
//     scanf("%s", class[1].name);
//     printf("Roll No: ");
//     scanf("%d", &class[1].roll_no);
//     printf("Marks: ");
//     scanf("%f", &class[1].marks);

//     // Continue for all 30 students...

//     printf("Enter details for student 30:\n");
//     printf("Name: ");
//     scanf("%s", class[29].name);
//     printf("Roll No: ");
//     scanf("%d", &class[29].roll_no);
//     printf("Marks: ");
//     scanf("%f", &class[29].marks);

//     // Manually output the details of each student
//     printf("\nDetails of the students:\n");
//     printf("Student 1: Name: %s, Roll No: %d, Marks: %.2f\n", 
//            class[0].name, class[0].roll_no, class[0].marks);
    
//     printf("Student 2: Name: %s, Roll No: %d, Marks: %.2f\n", 
//            class[1].name, class[1].roll_no, class[1].marks);

//     // Continue for all 30 students...

//     printf("Student 30: Name: %s, Roll No: %d, Marks: %.2f\n", 
//            class[29].name, class[29].roll_no, class[29].marks);

//     return 0;
// }

