#include <stdio.h>
#include <string.h>

int main() {
    // Initialize newstring with "hello " (note the space at the end)
    char newstring[100] = "hello ";
    
    // Initialize oldstring with "world"
    char oldstring[] = "world";
    
    // Concatenate oldstring to the end of newstring
    // strcat appends the content of oldstring to newstring
    strcat(newstring, oldstring);
    
    // Print the concatenated result
    puts(newstring);
    
    return 0;
}
