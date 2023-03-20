#include <stdio.h>

const char* words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"};

void convertToWords(int number) {
    if(number < 0 || number > 10) {
        printf("Invalid input\n");
        return;
    }
    
    printf("%s ", words[number]);
}

int main() {
    int number;
    
    printf("Enter a number between 0 and 10: ");
    scanf("%d", &number);
    
    convertToWords(number);
    
    return 0;
}
