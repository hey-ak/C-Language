#include<stdio.h>
void printstring(char arr[]){
    for (int i = 0; arr[i]!='\0'; i++)
    {
        printf("%c", arr[i]);


    }
    printf("\n");
}




int main(){
    char firstName[] = "Akshay";
    char lastName[] = "Jha";
    printstring(firstName);
    printstring(lastName);

    return 0;
}