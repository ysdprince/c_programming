// write a function to calculate percentage of a student from marks in science , math and sanskrit
#include <stdio.h>

// Function prototype
float calper(int math, int sci, int sans);

int main() {
    int math = 91;
    int science = 89;
    int sanskrit = 90;
    
    // Print the percentage
    printf("Percentage is: %.2f", calper(math, science, sanskrit));
    
    return 0;
}

// Function to calculate the percentage
float calper(int math, int sci, int sans) {
    // Calculate the average and cast to float to ensure floating-point division
    return (math + sci + sans) / 3.0;
}
