#include <stdio.h>
// Function prototype
int sum(int a, int b);
int main() {
    int a,b;
    // Prompt user for input
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
     // Call the sum function and print the result
	int s = sum(a,b);
	printf("Sum is %d \n",s);
	return 0;

}
// Function definition

// int sum(int a, int b){
//     return a + b ; 
// }
int sum(int x, int y){
    return x + y ; 
}
/*
Consistent Naming: The parameter names in the function declaration (int a, int b) and definition (int x, int y) are different, but this is fine because the parameter names in the definition are local to that function.
*/