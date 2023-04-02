#include <stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("%d,%d \n", *a, *b); // print the values at the addresses, not the addresses themselves
}

int main(){
    int x, y;
    x = 6;
    y = 7;
    printf("%d,%d\n", x, y);
    swap(&x, &y);
    printf("%d,%d \n", x, y);

    return 0;
}
