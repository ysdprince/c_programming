// we can also compare two pointers
#include <stdio.h>
int main(){
    int age=22;
    int mge=22;
    int *ptr=&age;
    int *ctr=&mge;
    printf("difference= %u\n",ptr-ctr);
    ctr=&age;
    printf("comaprision= %u\n",ptr==ctr);
    return 0;
}