#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("dummy_text.txt", "r");
    
    if (fptr == NULL) {
        printf("Error opening file.\n");
        // return 1;
    }else{
        char ch;
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    
    fclose(fptr);
    return 0;
    }


}
