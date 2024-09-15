#include <stdio.h>

int main() {
    float price[3];

    // Prompting the user to enter prices of 3 items
    printf("Enter price 1: ");
    scanf("%f", &price[0]);

    printf("Enter price 2: ");
    scanf("%f", &price[1]);

    printf("Enter price 3: ");
    scanf("%f", &price[2]);

    // Printing the final cost with GST (assuming GST is 18%)
    printf("Total price 1 with GST: %f\n", price[0] + (0.18 * price[0]));
    printf("Total price 2 with GST: %f\n", price[1] + (0.18 * price[1]));
    printf("Total price 3 with GST: %f\n", price[2] + (0.18 * price[2]));

    return 0;
}
