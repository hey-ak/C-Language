#include <stdio.h>
void reversearray(int arr[],int n){
    for (int i = 0; i < n/2; i++)
    {
        int firstvalue= arr[i];
        int secondvalue = arr[n - i - 1];
        arr[i] = secondvalue;
        arr[n-i-1] = firstvalue;
    }
    
}


int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    reversearray(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}