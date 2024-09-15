#include <stdio.h>

int main() {
    // Initialize a pointer to a string literal "Aman"
    char *name = "Aman";
    
    // Print the string that the 'name' pointer is currently pointing to
    puts(name);
    
    // Change the pointer to point to a new string literal "Anand"
    name = "Anand";
    
    // Print the new string that the 'name' pointer is now pointing to
    puts(name);
    
    return 0;
}



// #include <stdio.h> 
// int main(){
//     char name ="aman";
//     name="khusi"; // can not change this value show error in you program.
//     puts(name);
//     return 0;
// }
