/*
Write a program to check if a number is divisible by 7 or not....?
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    printf("Enter A Number : ");
    scanf("%d", &x);
    printf("%d \n", x % 7 == 0);
  /*
Write a program to check if a number is EVEN or ODD..?
even ----> 1
odd  ----> 0
*/
 int y;
    printf("Enter A Number : ");
    scanf("%d", &y);
    printf("%d \n", y % 2 == 0);

    // Are the following valid or not
    int v = 9^9;
    // XOR Symbol ( ^ )
    printf(" 9^9 = %d \n", v);
  return 0;
}
