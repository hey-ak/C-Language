#include <stdio.h>
#include <stdbool.h>
bool isSorted(int arr[],int size){
    if (size ==0 || size== 1)
    {
       return true;
        
    }
    if (arr[0]>arr[1])
    {
        return false;
    }
   return isSorted(arr+1,size-1);
    
    

}

int main(){
 int arr[5] = {1,6,3,4,5};
 int size =5;
 bool ans= isSorted(arr,size);
 if (ans==1)
 {
    printf("Sorted");
 }
 else
 {
    printf("Unsorted");
 }
 
 
}