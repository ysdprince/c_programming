#include <stdio.h>
int main(){
    char name[] = {'P','r','i','n','c','e','\0'};
    char nam[] = {"PRINCE"};
    
    printf("%s\n", name);  // Correct placement of \n
    printf("%s\n", nam);
    
    return 0;
}
