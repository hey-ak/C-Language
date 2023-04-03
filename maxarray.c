#include <stdio.h>

int main() {
    int arr[5] = {5, 2, 9, 10, 7};
    int max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", max);

    return 0;
}
