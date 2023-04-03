#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main() {
    int arr[MAX_SIZE]; // Declare array
    int n; // Actual array size
    int newElement; // Element to be inserted

    // Input array size
    printf("Enter the size of array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &newElement);

    // Insert element at the end
    arr[n] = newElement;
    n++;

    // Print updated array
    printf("Array after inserting new element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
