#include <stdio.h>
int power(int n){
    if (n==0)
    {
        return 1;
    }
    // recursive relation
    int smallerProblem = power(n-1);
    int biggerproblem = 2*smallerProblem;

    
}

int main(){
 int n;
 scanf("%d",&n);
 int ans = power(n);
 printf("%d",ans);

    return 0;
}