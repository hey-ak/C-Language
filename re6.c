#include <stdio.h>

void printSubsequences(int arr[], int n, int index, int subseq[]) {
    if (index == n) {
        printf("{ ");
        for (int i = 0; i < n; i++) {
            if (subseq[i] == 1) {
                printf("%d ", arr[i]);
            }
        }
        printf("}\n");
        return;
    }
    subseq[index] = 1;
    printSubsequences(arr, n, index+1, subseq);
    subseq[index] = 0;
    printSubsequences(arr, n, index+1, subseq);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int subseq[n];
    printSubsequences(arr, n, 0, subseq);
    return 0;
}
