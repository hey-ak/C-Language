#include <stdio.h>
void reachDest(int source,int destination){
    printf("Source %d Destination %d \n",source,destination);
    if (source==destination)
    { 
        printf("Reached");
        return;
    }
    source++;
    reachDest(source,destination);
    
}

int main(){
    int source =1;
    int desination = 10;
    reachDest(source,desination);
    return 0;
}