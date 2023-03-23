#include <stdio.h>
#include <string.h>

void reverseWords(char *str) {
    char *wordStart = str;
    char *temp = str;

    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(wordStart, temp - 1);
        } else if (*temp == ' ') {
            reverse(wordStart, temp - 1);
            wordStart = temp + 1;
        }
    }

    reverse(str, temp - 1);
}

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[] = "This is a sample string";
    printf("Original string: %s\n", str);

    reverseWords(str);

    printf("Reversed string: %s\n", str);

    return 0;
}