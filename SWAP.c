#include<stdio.h>
int main(){
    int a ,b;
    printf("Enter Number 1");
    scanf("%d",&a);
    printf("Enter Number 2");
    scanf("%d",&b);
    a=a+b;
   b= a-b;
    a=a-b;
    printf("%d %d ",a,b);
}