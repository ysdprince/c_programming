#include <stdio.h>
int main()
{
    // iterater; counter
    for (int i = 1; i <= 5; i++)
    // (i++ == i=i+1)
    {
        printf("hello world \n");
    }
    for (int k = 1; k <= 30; k++)
    {
        printf("%d \n", k);
    }
    for (int m = 20; m >= 0; m = m - 1)
    // (m-- == m=m-1)
    {
        printf("%d \n", m);
    }
    // float number
    for(float x=1.2; x<=7.2; x++){
        printf("The float no. : %f \n",x);
        printf("The acctual flolat value : %f \n",x);
    }
    // character
    for (char t='a'; t<='z'; t++){
        printf("Charater : %c \n",t);
        printf("The acctual character : %c \n",t);
    }
    /*
    Print the numberfrom 0 to 10
    */
    for (int s = 0; s <= 10; s++)
    {
        printf(" Print the numberfrom 0 to 10 :--->  %d \n", s);
    }
    /*
     increment operator
     ++i ( pre increment oprator )
     i++ ( post increment oprator )
    */
    int a;
    a = 1;
    printf("use then increase : %d \n", a++); // use then increase
    printf("increase value : %d \n", a);
    int b;
    b = 4;
    printf("The acctual value %d \n", b);
    printf("increase value :  %d \n", ++b); // increase then use

    /*
    decreament operator
    --i ( pre decreament oprator )
    i-- ( post decreament oprator )
   */
    int c;
    c = 6;
    printf("use then decrease : %d \n", c--); // use then decrease
    printf("decrease value : %d \n", c);
    int d;
    d = 9;
    printf("The acctual value %d \n", d);
    printf("decrease value :  %d \n", --d); // decrease then use

    return 0;
}