// #include <stdio.h>

// void Sumfun(int i,int sum){
//     if (i<1)
//     {
//         printf("%d",sum);
//         return;
//     }
//     Sumfun(i-1,sum+i);
    
// }

// int main(){
//     int n;
//     printf("Enter the value of n\n");
//     scanf("%d",&n);
//     Sumfun(n,0);


// }
// problem -2
#include <stdio.h>

int sumprint(int n) {
    if (n == 0) {
        return 0;
    }
    int sum = n + sumprint(n-1);
    return sum;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int result = sumprint(n);
    printf("Sum of numbers from 1 to %d is %d\n", n, result);
    return 0;
}