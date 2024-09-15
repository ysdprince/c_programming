#include <stdio.h>
int main()
{
    // Relational Operators
    int a, b;
    a = 98;
    b = 98;
    printf("That the output will be---> %d \n", a == b); // Relational operators (==,>,>=,<,<=,!=)
    printf("That the output will be---> %d \n", a > b);
    printf("That the output will be---> %d \n", a >= b);
    printf("That the output will be---> %d \n", a < b);
    printf("That the output will be---> %d \n", a <= b);
    printf("That the output will be---> %d \n", a != b);
    /* Logical Operators
     AND operator ( && )

      T T = T
      T F = F
      F T = F
      F F = F
     */
    printf("%d \n", 4 > 2 && 5 > 1);
    printf("%d \n", 4 > 2 && 5 < 1);
    printf("%d \n", 4 < 2 && 5 < 1);
    /*
    OR Operator ( || )
      T T = T
      T F = T
      F T = T
      F F = F
    */
    printf("%d \n", 4 > 2 || 5 > 1);
    printf("%d \n", 4 > 2 || 5 < 1);
    printf("%d \n", 4 < 2 || 5 < 1);
    /*
    NOT Operator ( ! )
     T = F
     F = T
    */
    printf(" %d \n", !9 > 8);
    printf(" %d \n", !9 < 8);
    printf("%d \n", !(4 > 2) && (5 > 1));
/*
ASSINGMENT Operator
   +=
   -=
   *=
   /=
   %=

*/
int m=5;
int k=2;
// m = m+k;
m+=k;
printf("%d \n",m);

    return 0;
}