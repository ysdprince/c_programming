// write a function name slice , which takes a string & returns a slice string from n to m .
#include <stdio.h> 
void slice(char str[], int n , int m);
int main(){
    char string[]="helloworld";
    int n=3;
    int m=6;
    slice(string,n,m);
    return 0;
}
void slice (char str[], int n , int m){
    char newstr[100];
    int j=0;
    for(int i=n; i<=m; i++ , j++ ){
        newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}