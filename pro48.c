// write a functioon to reverse an array.
#include <stdio.h>
void revers(int arr[],int n);
void printarray(int arr[], int n);
int main(){
    int arr[]={5,6,7,8,9};
    revers(arr,5);
    printarray(arr,5);
    return 0;
}
void revers(int arr[],int n){
    for(int i=0; i<n/2; i++){
       int firstval=arr[i];
       int secondval=arr[n-i-1];
       arr[i]=secondval;
       arr[n-i-1]=firstval;
    }
}

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}