#include<stdio.h>
void checkchar(char str[], char ch){
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==ch)
        {
            printf("Prensent");
            return;
        }
        
        
    }
    printf("Not present");
}

int main(){
    char str[] = "Laptop";
    char ch = 'b';
    checkchar(str, ch);
}