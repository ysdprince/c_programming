// write a function to convert celcius to farenhiet
#include <stdio.h>

// Function prototype to convert Celsius to Fahrenheit
float converttemp(float celsius);

int main() {
    // Convert 49 Celsius to Fahrenheit
    float temp = converttemp(49);
    
    // Print the result
    printf("Fahrenheit: %.2f\n", temp);
    
    return 0;
}

// Function definition to convert Celsius to Fahrenheit
float converttemp(float celsius) {
    // Convert Celsius to Fahrenheit using the formula
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}
