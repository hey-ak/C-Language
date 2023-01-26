#include<stdio.h>
int main(){
 int number;
 printf("Enter a Number");
 scanf("%d",&number);
 if (number>9 && number<100)
 {
     printf("Two digit NUmber");
 }
 else
 {
    printf("Not a Two Digit Number");
 }
 
 
}