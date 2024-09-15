// 2 numbers - a & b, are written in a file, write a programe to replace them with their sum.
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("replace.txt","r");
    int a;
    fscanf(fptr,"%d",&a);
    int b;
    fscanf(fptr,"%d",&b);
    if( fptr == NULL){
        printf("File opening Error");
    }
    fclose(fptr);
    fptr=fopen("replace.txt","w");
    fprintf(fptr," sum is: %d \n", a + b );

    return 0;
}