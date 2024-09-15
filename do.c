/*
print the number 1 to 5
*/
#include <stdio.h>
int main()
{
    int i;
    i = 1;
    do
    {
        printf("%d \n", i);
        i++;
    } while (i <= 5);
    /*
print 5 times Hello world
*/
    int a;
    a = 1;
    do
    {
        printf("Hello world \n");
        a++;
    } while (a <= 5);
    return 0;
}