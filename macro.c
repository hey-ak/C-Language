#include <stdio.h>

#define PRINT_ARRAY(arr, len) \
    do { \
        printf("["); \
        for (int i = 0; i < len; i++) { \
            printf("%d", arr[i]); \
            if (i < len - 1) { \
                printf(", "); \
            } \
        } \
        printf("]\n"); \
    } while(0)

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    // print the array using the macro function
    PRINT_ARRAY(arr, 5);

    return 0;
}
