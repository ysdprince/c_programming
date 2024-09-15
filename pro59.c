//  check if given character is present in string or not
#include <stdio.h>
void checkchar(char str[], char ch);
int main()
{
    char words[] = "helloworld";
    char ch = 'h';
    checkchar(words, ch);
    return 0;
}
void checkchar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("character is present  :)  ");
            return;
        }
        else
        {
            printf("chracater is not present ! ");
            return;
        }
    }
}