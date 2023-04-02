#include <stdio.h>

void printSubset(int arr[], int subset[], int n, int index) {
  if (index == n) {
    printf("{ ");
    for (int i = 0; i < n; i++) {
      
        printf("%d ", arr[i]);
      
    }
  
    printf("}\n");
  }
  
    subset[index] = 0;
    printSubset(arr, subset, n, index + 1);
    subset[index] = 1;
    printSubset(arr, subset, n, index + 1);
  
}

int main() {
  int arr[] = {1, 2, 3};
  int n = sizeof(arr) / sizeof(arr);
  
  int subset[n];
  
  printSubset(arr, subset, n, 0);

  return 0;
}