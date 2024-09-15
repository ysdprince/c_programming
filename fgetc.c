#include <stdio.h>
int main(){
    FILE *fileptr;
    fileptr = fopen("dummy_text.txt","r");
    printf("character %c \n",fgetc(fileptr));
    printf("character %c \n",fgetc(fileptr));
    printf("character %c \n",fgetc(fileptr));
    printf("character %c \n",fgetc(fileptr));
    printf("character %c \n",fgetc(fileptr));
    fclose(fileptr);
    return 0;
}