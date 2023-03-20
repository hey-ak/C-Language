#include <stdio.h>
#include <stdbool.h>

bool binarySearch(int arr[], int key, int start, int end) {
    if (start > end) {
        return false;
    }
    int mid = (start + end) / 2;
    if (arr[mid] == key) {
        return true;
    }
    if (arr[mid] < key) {
        return binarySearch(arr, key, mid + 1, end);
    } else {
        return binarySearch(arr, key, start, mid - 1);
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 15;
    bool ans = binarySearch(arr, key, 0, size - 1);
    if (ans) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }
    return 0;
}
