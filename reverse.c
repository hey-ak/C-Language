#include <stdio.h>
#include <string.h>


int main(){

    char x [] = "125";
    int size = strlen(x);
    int i;

    for ( i =size-1; i >=0; i--)
    {
        printf("%c",x[i]);
    }
    



    return 0;
}