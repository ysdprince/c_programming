// write a program to allocate memory of size of n, where n is entered by the user.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("Enter the size in number");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=1; i<=n; i++){
        printf("Size: %d %d \n",i,ptr[i]);
    }
    return 0;
}