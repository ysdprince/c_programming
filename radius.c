/*
Write a program to calculate area of a circle.
(radius is given)
*/
#include <stdio.h>
int main(){
    float radius;
    printf("Enter the radius");
    scanf("%f",&radius);
    printf("The area of circle is: %f", 3.14*radius*radius);
    return 0;
}