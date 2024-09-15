// make programe to input student information from a user and enter it to a file.
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("student_information.txt","w");
    char name[150];
    int age;
    int roll;
    float cgpa;
    printf("Enter Name: ");
    scanf("%s",&name);
    printf("Enter Roll NO.: ");
    scanf("%d",&roll);
    printf("Enter Age: ");
    scanf("%d",&age);
    printf("Enter CGPA: ");
    scanf("%f",&cgpa);
    if(fptr == NULL){
        printf("Error File Opening");
    }else{
        fprintf(fptr,"Name: %s \n",name);
        fprintf(fptr,"Age: %d \n",age);
        fprintf(fptr,"Roll no.: %d \n",roll);
        fprintf(fptr,"CGPA: %f \n",cgpa);
    }
    fclose(fptr);
    return 0;
}