#include <stdio.h>
#include <string.h> 
void print_caps(char str[], int i, int len) {
    if (i >= len - 1) {
        printf("%c", str[len-1]); 
        return;
    }

    if (str[i] == str[i+1] && str[i] != ' ') {
        printf("%c%c", str[i], str[i] - 32);
        print_caps(str, i+1, len);
    } else {
        printf("%c", str[i]); 
        print_caps(str, i+1, len);
    }
}

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    len = strlen(str);

    print_caps(str, 0, len);

    return 0;
}
