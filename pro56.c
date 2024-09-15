// find the salted from of a password entered by the user if the salt is " @#123 " & added at the end.
#include <stdio.h>
#include <string.h>
void salting(char password[]);
int main(){
    char fpass[100];
    printf("Enter the password: ");
    scanf("%s",fpass);
    salting(fpass);
    return 0;
}
void salting(char password[]){
    char salt[]="@#123";
    char newpass[200];
    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);
}