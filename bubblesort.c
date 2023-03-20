#include <stdio.h>
void recurbublSort(int arr[], int len){
   int temp;

   if (len == 1){
      return;
   }
   for (int i=0; i<len-1; i++){
      if (arr[i] > arr[i+1]){
         temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
      }
   }
   len=len-1;
   recurbublSort(arr, len);
}
int main(){
   int Arr[] = {21, 34, 20, 31, 78, 43, 66};
   int length = sizeof(Arr)/sizeof(Arr[0]);

   recurbublSort(Arr, length);

   printf("Sorted array : ");
   for(int i=0;i<length;i++){
      printf("%d ",Arr[i]);
   }

   return 0;
}