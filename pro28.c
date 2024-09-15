/*
write a function that prints Namaste if user is Indian & bonjour if the user is Frensh
*/
#include <stdio.h>
void india();
void fransh();
int main(){
    char chr;
    printf("Enter the i for India or f for Fransh ");
    scanf("%c",&chr);
    if(chr == 'i'){
        india();
    }else{
        fransh();
    }
    return 0;
}
void india(){
    printf("Namste ! \n");
}
void fransh(){
    printf("Bonjour ! \n");
}