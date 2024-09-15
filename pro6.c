/*
   if it's sunday & it's Snowing ---> true
*/
#include <stdio.h>
int main()
{
    int is_sunday;
    int is_snowing;
    is_sunday = 1;
    is_snowing = 1;
    printf("%d \n", is_sunday && is_snowing);
    /*
       if it's Monday OR it's raining ---> true
   */
    int is_monday;
    int is_rainig;
    is_monday = 0;
    is_rainig = 1;
    printf("%d \n", is_monday || is_rainig);
    /*
        if a number is greater than 9 & less than 100  ---> true
        ( 2 didgit number )
    */
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    printf("%d \n", x > 9 && x < 100);

    return 0;
}