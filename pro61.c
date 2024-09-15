
// Enter address ( House no. , block , city , state ) of 5 people

#include <stdio.h>

struct address {
    int house_no;
    int block;
    char city[200];
    char state[250];
};

void printadd(struct address add);

int main() {
    struct address add[5];

// input
    // Person 1
    printf("Enter information of person-1:\n");
    printf("Enter House no.: ");
    scanf("%d", &add[0].house_no);
    printf("Enter Block: ");
    scanf("%d", &add[0].block);
    printf("Enter City: ");
    scanf("%s", add[0].city);  // Limit the input size to avoid overflow
    printf("Enter State: ");
    scanf("%s", add[0].state); 
    printf("\n");

    // Person 2
    printf("Enter information of person-2:\n");
    printf("Enter House no.: ");
    scanf("%d", &add[1].house_no);
    printf("Enter Block: ");
    scanf("%d", &add[1].block);
    printf("Enter City: ");
    scanf("%s", add[1].city);  
    printf("Enter State: ");
    scanf("%s", add[1].state);
    printf("\n");

    // Person 3
    printf("Enter information of person-3:\n");
    printf("Enter House no.: ");
    scanf("%d", &add[2].house_no);
    printf("Enter Block: ");
    scanf("%d", &add[2].block);
    printf("Enter City: ");
    scanf("%s", add[2].city); 
    printf("Enter State: ");
    scanf("%s", add[2].state); 
    printf("\n");

    // Person 4
    printf("Enter information of person-4:\n");
    printf("Enter House no.: ");
    scanf("%d", &add[3].house_no);
    printf("Enter Block: ");
    scanf("%d", &add[3].block);
    printf("Enter City: ");
    scanf("%s", add[3].city);  
    printf("Enter State: ");
    scanf("%s", add[3].state); 
    printf("\n");

    // Person 5
    printf("Enter information of person-5:\n");
    printf("Enter House no.: ");
    scanf("%d", &add[4].house_no);
    printf("Enter Block: ");
    scanf("%d", &add[4].block);
    printf("Enter City: ");
    scanf("%s", add[4].city);  
    printf("Enter State: ");
    scanf("%s", add[4].state);
    printf("\n");

    // Print addresses
    printadd(add[0]);
    printadd(add[1]);
    printadd(add[2]);
    printadd(add[3]);
    printadd(add[4]);

    return 0;
}

void printadd(struct address add) {
    printf("%d, %d, %s, %s\n", add.house_no, add.block, add.city, add.state);
}
