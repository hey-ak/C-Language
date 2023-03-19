// problem 1
// #include <stdio.h>

// void printName(int i, int n){
//     if (i > n) {
//         return;
//     }
//     printf("Akshay\n");
//     printName(i+1, n);
// }

// int main(){
//     printf("Enter the value of n: ");
//     int n;
//     scanf("%d", &n);
//     printName(1, n);
//     return 0;
// }
// problem 2
// #include <stdio.h>

// void printName(int i, int n){
//     if (i < 1) {
//         return;
//     }
//     printf("%d\n",i);
//     printName(i-1, n);
// }

// int main(){
//     printf("Enter the value of n: ");
//     int n;
//     scanf("%d", &n);
//     printName(n, n);
//     return 0;
// }
// problem 3 using backtracking print 1 to n
// #include <stdio.h>

// void printName(int i, int n){
//     if (i < 1) {
//         return;
//     }
//     printName(i-1, n);
//      printf("%d\n",i);
// }

// int main(){
//     printf("Enter the value of n: ");
//     int n;
//     scanf("%d", &n);
//     printName(n, n);
//     return 0;
// }
// problem -4 print n to 1 using backtracking
#include <stdio.h>

void printName(int i, int n){
    if (i > n) {
        return;
    }
    printName(i+1, n);
     printf("%d\n",i);
}

int main(){
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);
    printName(1, n);
    return 0;
}
