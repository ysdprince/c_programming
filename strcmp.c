#include <stdio.h>
#include <string.h>
int main(){
    char firststring[]="Apple";
    char secondstring[]="Banana";
    /*
      compares two string and return a value.

      0 --> ( string equal ) depend for ASCII value
      positive --> ( first string > second string )  depend for ASCII value
      negative --> ( second string < first string )  depend for ASCII value

    */
   printf("%d \n",strcmp(firststring,secondstring));
    return 0;
}