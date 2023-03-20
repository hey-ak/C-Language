#include <stdio.h>
int sumArray(int arr[],int size){
    if (size==0)
    {
        return 0;
    }
    if (size==1)
    {
        return arr[0];
    }
    int sum = arr[0] + sumArray(arr+1,size-1);
    return sum;
    
    
}



int main(){
    int arr[5]= {1,5,6,8,9};
    int size =5;
     int result =sumArray(arr, size);
     printf("%d",result);
}

