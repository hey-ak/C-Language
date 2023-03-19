#include<stdio.h>
int count=0;
void print(){
    if(count==3){
        return;
    }
    printf("%d ",count);
    count++;
    print();
}


int main(){
    print();






    
}