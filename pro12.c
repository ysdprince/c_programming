/*
write a program to find if achacrecter enterd by user is upper case or not
*/
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character : ");
    scanf("%C", &ch);
    if (ch >= 'A' && ch <= 'Z')
    //  if (ch >= '65' && ch <= '90')
    {
        printf("Uppercase \n");
    }
    else if (ch >= 'a' && ch <= 'z')
    //  if (ch >= '97' && ch <= '122')

    {
        printf("Lowercase \n");
    }
    else
    {
        printf("invalid character !");
    }

    return 0;
}