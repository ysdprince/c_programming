// write the function to calculate the sum, product & avarage of two numbers, print that avarage in the main function
#include <stdio.h>
void call(int a, int b, int *sum, int *prod, int *avg);
int main(){
    int a=3;
    int b=5;
    int sum, prod, avg;
    call(a,b,&sum,&prod,&avg);
    printf(" sum=%d \n prod= %d \n avg= %d \n",sum,prod,avg);
    return 0;
}
void call(int a, int b, int *sum, int *prod, int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}