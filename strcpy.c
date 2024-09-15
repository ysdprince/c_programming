#include <stdio.h>
#include <string.h>
int main(){
    char newstring[]="NEW Str";
    char oldstring[]="OLD Str";
    strcpy(newstring,oldstring); // Copy the content of oldstring into newstring
    puts(newstring);    // Print the copied string

    return 0;
}