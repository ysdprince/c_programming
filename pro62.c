// create a structure to store vectors. then make a function to return sum of two vectors
#include <stdio.h> 
struct vector{
    int x;
    int y;
};
void callsum(struct vector v1 , struct vector v2 , struct vector sum);
int main(){
    struct vector v1={ 5 , 10 };
    struct vector v2 ={ 3 , 7 };
    struct vector sum= { 0 };
    callsum(v1 , v2 , sum);
   
    return 0;
}
void callsum(struct vector v1 , struct vector v2 , struct vector sum){
    sum.x = v1.x + v2.x ;
    sum.y = v2.y + v2.y;
    printf("SUM X is =  %d \n",sum.x);
     printf("SUM y is =  %d \n",sum.y);
}