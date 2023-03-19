// #include <stdio.h>

// void swapArray(int arr[], int start, int end) {
//    if (start>=end)
//    {
//     return;
//    }
//    int temp= arr[start];
//    arr[start]= arr[end];
//    arr[end]= temp;
//    swapArray(arr,start+1,end-1);

   
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Original array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     swapArray(arr, 0, n-1);
//     printf("Swapped array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
// problem -2 palindrome string check
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (str[start] != str[end]) {
        return 0;
    }
    return isPalindrome(str, start+1, end-1);
}

int main() {
    char str[] = "racecar";
    int n = strlen(str);
    int result = isPalindrome(str, 0, n-1);
    if (result == 1) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
    return 0;
}
