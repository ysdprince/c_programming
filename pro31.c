#include <stdio.h>
#include <math.h>

// Function prototypes
float square(float side);
float circle(float radius);
float rectangle(float a, float b);

int main() {
    float value, rds, a, b;
    
    // Square
    printf("Enter the side length to calculate the area of the square: ");
    scanf("%f", &value);
    printf("The area of the square is: %f\n", square(value));

    // Circle
    printf("Enter the radius to calculate the area of the circle: ");
    scanf("%f", &rds);
    printf("The area of the circle is: %f\n", circle(rds));

    // Rectangle
    printf("Enter the length (a) of the rectangle: ");
    scanf("%f", &a);
    printf("Enter the width (b) of the rectangle: ");
    scanf("%f", &b);
    printf("The area of the rectangle is: %f\n", rectangle(a, b));

    return 0;
}

// Function to calculate the area of a square
float square(float side) {
    return side * side;
}

// Function to calculate the area of a circle
float circle(float radius) {
    return 3.14 * radius * radius;
}

// Function to calculate the area of a rectangle
float rectangle(float a, float b) {
    return a * b;
}
