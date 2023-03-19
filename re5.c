#include <stdio.h>

int fibonaci(int n){
    if (n<=1)
    {
        return n;
    }
    int l= fibonaci(n-1);
    int sl= fibonaci(n-2);
    return l+sl;
}
int main(){
    int n;
    printf("Enter Number ");
    scanf("%d",&n);
     int result =fibonaci(n);
     printf("%d",result);

    return 0;
}