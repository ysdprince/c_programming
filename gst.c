#include <stdio.h>

// Function prototype for GST calculation
void gst(float price);

int main() {
    float real_price ;
    printf("Enter the Price: ");
    scanf("%f", &real_price);
    
    gst(real_price); // Call the gst function with the price as an argument
    
    return 0;
}

// Function definition for GST calculation
void gst(float price) {
    float gst_amount = price * 0.18; // Calculate GST as 18% of the price
    float final_price = price + gst_amount; // Calculate the final price including GST
    
    printf("The final price including GST is: %.2f\n", final_price); // Print the final price with 2 decimal places
}
