#include <stdio.h>
void calc(int a,int b,int*sum,int *product,int*average){
    *sum = a + b;
    *product = a * b;
    *average = a + b / 2;
    printf("sum = %d, product = %d, average = %d", *sum, *product, *average);
}



int main(){
    int a, b;
    printf("Enter The Numbers\n");
    scanf("%d %d", &a, &b);
    int sum = 0;
    int product = 0;
    int average = 0;
    calc(a, b, &sum, &product, &average);

    return 0;
}