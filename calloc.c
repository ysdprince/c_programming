#include <stdio.h>
#include <stdlib.h>
int main(){
    int *mac;
    mac=(int*)calloc(5,sizeof(int));  // calloc by defuat assing the value with 0.
    // mac[0]=10;
    // mac[1]=49;
    // mac[2]=87;
    // mac[3]=21;
    // mac[4]=432;
    for(int i=0; i<5; i++){
        printf("%d \n",mac[i]);
    }
    return 0;
}