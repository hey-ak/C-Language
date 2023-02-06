#include<stdio.h>
int Add(int a, int b){
    int sum= a+b;
    return sum;
}
int main(){
    int i=3;
    int *j= &i;
    int **k=&j;
    printf("%d",k);



    return 0;
}