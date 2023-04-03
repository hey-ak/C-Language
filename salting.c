#include<stdio.h>
#include<string.h>
void salting(char password[])
{
    char newPasword[200];
    char salt[5] = "123";
    strcpy(newPasword, password);
    strcat(newPasword, salt);
    puts(newPasword);
}


int main(){
    char passwd[100];
    scanf("%s", &passwd);
    salting(passwd);
    return 0;
}