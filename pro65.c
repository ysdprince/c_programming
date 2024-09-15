// make a structure to store bank account information of a customer of abc bank. also , make an alias for it.
#include <stdio.h>
typedef struct bank_customer_info{
int account_no;
char name[150];
}acc ;
int main (){
    acc acc1={1234,"Ansu"};
    acc acc2={1235,"sweta"};
    acc acc3={1236,"Arjun"};
    acc acc4={1237,"kajal"};
    acc acc5={1238,"Aman"};
    printf("Account no. is :- %d \nname : %s \n \n",acc1.account_no, acc1.name);
    printf("Account no. is :- %d \nname is : %s \n \n",acc2.account_no, acc2.name);
    printf("Account no. is :- %d \nname is : %s \n \n",acc3.account_no, acc3.name);
    printf("Account no. is :- %d \nname is : %s \n \n",acc4.account_no, acc4.name);
    printf("Account no. is :- %d \nname is : %s \n \n",acc4.account_no, acc5.name);
    return 0;
};