#include <stdio.h>
#include <string.h>

void reverse(char* str, int i, int j) {
    if (i >= j) {
        return;
    }
    int temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    j--;
    i++;
    // recursive call
    reverse(str, i, j);
}

int main() {
    char name[] = "babbar";
    reverse(name, 0, strlen(name) - 1);
    printf("%s", name);
    return 0;
}
