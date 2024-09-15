// take a input from the user suning %c .
#include <stdio.h>
int main(){
    char str[100];
    char ch;
    int i;
    while(ch != '\n'){
        
        scanf("%c",&ch);
        str[i]=ch;
        i++;

    }
    str[i]='\0';
    puts(str);
    return 0;
}