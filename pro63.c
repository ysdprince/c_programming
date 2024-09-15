// creat a structure to store complex number . ( use arrow operator )
#include <stdio.h>
struct complex{
    int real;
    int img;
};
int main(){
    struct complex c1={ 5 , 8 };
    struct complex *ptr=&c1;
    printf("real part = %d \n", ptr->real);
    printf("Img part =  %d \n",ptr->img);
    return 0;
}