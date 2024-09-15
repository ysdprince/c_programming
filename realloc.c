// allocate memory for 5 numbers. then dynamacily increase it to 8 numbers.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *rec;
    rec=(int*)calloc(5,sizeof(int));
    printf("Enter number(5):\n");
    for(int i=0; i<5; i++){
        scanf("%d",&rec[i]);
    }
    rec=realloc(rec,8); // increase memory
    printf("ENter number(8):\n");
      for(int i=0; i<8; i++){
        scanf("%d",&rec[i]);
    }
     for(int i=0; i<8; i++){
        printf("memory %d : %d \n",i+1,rec[i]);
    }
    
    

    return 0;
}