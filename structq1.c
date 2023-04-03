#include <stdio.h>
#include <string.h>

typedef struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
} add;

void printDetails(add person){
    printf("House No: %d\n", person.houseNo);
    printf("Block: %d\n", person.block);
    printf("City: %s\n", person.city);
    printf("State: %s\n", person.state);
}

int main(){
    add p[5];
    int i;
    
    for(i = 0; i < 5; i++){
        printf("Enter the info of Person %d:\n", i+1);
        printf("House No: ");
        scanf("%d", &p[i].houseNo);
        printf("Block: ");
        scanf("%d", &p[i].block);
        printf("City: ");
        scanf("%s", p[i].city);
        printf("State: ");
        scanf("%s", p[i].state);
        printf("\n");
    }
    
    printf("Printing all the details:\n");
    for(i = 0; i < 5; i++){
        printf("Details of Person %d:\n", i+1);
        printDetails(p[i]);
        printf("\n");
    }
    return 0;
}
