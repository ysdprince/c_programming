// use to create alias for data types
#include <stdio.h>
#include <string.h>
typedef struct computer_science_engineering_students{
char name[50];
int roll;
char adress[200];
}cs;
int main(){
    cs s1={"Modi" , 24 , "Patna bihar" };
    printf("Student Adress is %s",s1.adress);
    
    return 0;
}