// print  the value of 'i' from its pointer to pointer
#include <stdio.h>
int main(){
    int i;
    i=4;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d \n",**pptr);
    return 0;
}