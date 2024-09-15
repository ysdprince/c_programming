#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("dummy_text.txt", "a");
    
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');
    
    fclose(fptr);
    return 0;
}
