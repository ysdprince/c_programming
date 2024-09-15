#include <stdio.h>
#include <math.h>
int main()
{
    int b, c;
    printf("Enter the value = ");
    scanf("%d",&b);
    b = c = b;
    int power = pow(b, c);
    printf("%d \n", power);
    printf("The module %d \n", -8%3);
    printf(" the module %d \n",  8%3);
    printf("int with int, the int value is %d \n", 2*2); // int (*,/,%,+,-) int
    printf("int with float , the float value is %f \n",2*3.1);  // int (*,/,%,+,-) float
    printf("float with float, the float value is %f \n",3.2*2.1);  // float (*,/,%,+,-) float
    int g=10+2*5;
    printf("10+2*5= %d\n", g);
    int h=4*3/6*2;
    printf("the output is 4*3/6*2= %d\n",h);
     int i=5*2-2*3;
    printf("the output is 5*2-2*3= %d\n",i);
     int j=5*2/2*3;
    printf("the output is 5*2/2*3= %d\n",j);
     int k=5*(2/2)*3;
    printf("the output is 5*(2/2)*3= %d\n",k);
     int l=5+2/2*3;
    printf("the output is 5+2/2*3= %d\n",l);
    
    return 0;
}