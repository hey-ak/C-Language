#include <stdio.h>
#include <stdbool.h>
bool LinearSearch(int arr[], int size, int key){
    if (size==0)
    {
        return 0;
    }
    if (arr[0]==key)
    {
        return 1;
    }
    
    int result = LinearSearch(arr+1,size-1,key);
    return result;
    
}


int main(){

int arr[5] = {1,2,3,4,5};
int size =5;
int key = 10;
bool ans =LinearSearch(arr,size,key);
if (ans==0)
{
    printf(" Not Found");
}
else
{
    printf("Found");
}




    return 0;
}