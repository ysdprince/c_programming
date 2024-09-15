#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("dummy_text.txt","r"); // r for only read the file

    /*
      file mode

      "r" open to read
      "rb" open to read in binary
      "w" open to write  ( note - when file doesn't exist in your device then write(w) function is create the same file automaticly )
      "rw" open write in binary   ( note - when file doesn't exist in your device then write binary (rw) function is create the same file automaticly )
      "a" open to append
    */
   if(fptr == NULL){
    printf("file doesn't exist in your device");
   }else{
    fclose(fptr);
   }
    
    
    return 0;
}