// write a program to allocate memory to store 5 prices.
#include <stdio.h>
#include <stdlib.h>
int main(){
    float *pri;
    pri=(float*) malloc(5*sizeof(float));
    pri[0]=10.43;
    pri[1]=49.67;
    pri[2]=87;
    pri[3]=2.4;
    pri[4]=432.0;
    for(int i=0; i<5; i++){
        printf("Price %d : %f \n",i,pri[i]);
    }
    return 0;
}