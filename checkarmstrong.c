#include <stdio.h>
// #include <math.h>
double power(double base, int exponent) {
    double result = 1.0;
    int i;

    if (exponent > 0) {
        for (i = 0; i < exponent; i++) {
            result *= base;
        }
    } else if (exponent < 0) {
        for (i = 0; i > exponent; i--) {
            result /= base;
        }
    }

    return result;
}



int main(){
    int n;
    scanf("%d",&n);
     int original_number = n;
    int sum =0;

    while (n>0)
    {
        int lastdigit = n%10;
        sum+= power(lastdigit,3);
        n = n/10;
        
    }
    if (sum == original_number)
    {
        printf("Armstrong Number");

    }
    else
    {
        printf("Not an armstrong Number");
    }
    
    
    




    return 0;
}