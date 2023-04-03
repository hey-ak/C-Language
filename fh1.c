#include <stdio.h>



int main(){
    // for opening a file
    FILE *fptr;
    // fptr = fopen("test.txt", "r");// read file
    fptr = fopen("Ntest.txt", "w");// Write file

    if(fptr==NULL){
        printf("File Doestn't Exist");
    }
    else
    {
        printf("File Exist");
        fclose(fptr);
    }
    
    // for closing a file
    // fclose(fptr);

    return 0;
}