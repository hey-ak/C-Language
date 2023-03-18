#include <stdio.h>

typedef int int_array[10];

int main() {
    int_array hello = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // print the array
    for (int i = 0; i < 10; i++) {
        printf("%d ", hello[i]);
    }

    return 0;
}
