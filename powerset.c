#include <stdio.h>

void printSubsets(int arr[], int start, int end, int subset[], int index)
{
    // print the current subset
    
    printf("{ ");
    for (int i = 0; i < index; i++) {
        printf("%d ", subset[i]);
    }
    printf("}\n");
  
    for (int i = start; i <= end; i++) {
        // include the current element in the subset
        subset[index] = arr[i];
      
        // generate all subsets that include the current element
        printSubsets(arr, i + 1, end, subset, index + 1);
    }
}

int main()
{
    int arr[] = { 1, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int subset[n];
  
    // print all subsets of the array
    printSubsets(arr, 0, n - 1, subset, 0);
  
    return 0;
}
