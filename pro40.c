// adress of call by reference
#include <stdio.h>
void printadress(int *n);
int main(){
    int n=3;
    printadress(&n);
    printf("adress of n is= %u \n",&n);
    return 0;
}
void printadress(int *n){
    printf("adress of n is= %u \n",n);
}

