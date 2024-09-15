/*
print the sum of n natural number
also print them in revers
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int sum;
    sum =0;
    for(int i=1; i<=n; i++){
    sum=sum+i;    
    }
    printf("Sum  %d \n",sum);
    for(int j=n; j>=n; j--){
        printf(" revers %d \n",j);
    }
    
    return 0;
}