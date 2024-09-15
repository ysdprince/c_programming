/*
keep taking number as input from the user untill user emter an ODD number
*/
#include <stdio.h>
int main(){
    int n;
   do{
     printf("Enter the number: ");
   scanf("%d",&n);
   printf("%d \n",n);
   if(n % 2 != 0){
    break;
   }

   }
   while(1);
   printf("Thanks for enter ODD number");
    return 0;
}