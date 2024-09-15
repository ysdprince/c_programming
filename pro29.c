// print the table of  n
#include <stdio.h>
void table(int num);
int main(){
    int n;
    printf("Enter the num. : ");
    scanf("%d",&n);
    table(n);  // here n is passing arguments(actual parameter)
    return 0;
}
void table(int num){   // parameter or formal parameter
    for(int i=1; i<=10;i++){
        printf("%d \n", i*num);
    }
}