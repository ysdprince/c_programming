#include <stdio.h>

int main() {
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s", name);  // Reads a single word, stops at whitespace
    
    printf("oh hii %s\n", name);
    return 0;
}
