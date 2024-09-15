/*
write to function 1 to print hello and second to print "Good Bye"
*/
#include <stdio.h>
void welcome_msg();
void bye_msg();
int main(){
    welcome_msg();
    bye_msg();
    return 0;
}
void welcome_msg(){
    printf("HEllo ! \n");
}
void bye_msg(){
    printf("Good bye \n");
}