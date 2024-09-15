// make a programe to read 5 integrs from a file.
#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("int.txt", "r");
    int n;
    if (ptr == NULL)
    {
        printf("Error file opening");
    }
    else
    {
        fscanf(ptr, "%d", &n);
        printf("number = %d \n", n);
        fscanf(ptr, "%d", &n);
        printf("number = %d \n", n);
        fscanf(ptr, "%d", &n);
        printf("number = %d \n", n);
        fscanf(ptr, "%d", &n);
        printf("number = %d \n", n);
        fscanf(ptr, "%d", &n);
        printf("number = %d \n", n);
    }
    fclose(ptr);
    return 0;
}