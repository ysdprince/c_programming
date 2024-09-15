// write a programe to write all the ODD numbers from 1 to n in a file.
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Store_odd_no.txt","w");
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        if( i % 2 != 0){
            fprintf( fptr, "odd number is: %d \n",i );
        }
    }
    fclose(fptr);
    return 0;
}