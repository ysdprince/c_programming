#include <stdio.h>

int main() {
    FILE *nptr;
    nptr = fopen("dummy_text.txt", "w");
    
    if (nptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fputc('M', nptr);
    fputc('a', nptr);
    fputc('n', nptr);
    fputc('g', nptr);
    fputc('o', nptr);

    fclose(nptr);  // Close the file after writing
    
    return 0;
}
