#include <stdio.h>
int power(int a , int b){

    if (b==0)
    {
        return 1;
    }
    if (b==1)
    {
        return a;
    }
    int ans = power(a,b/2);

    if (b%2==0)
    {
        return ans *ans;
    }
    else
    {
        return a*ans*ans;
    }
    
    
    
}




int main(){
int a,b;
scanf("%d %d",&a,&b);
int result = power(a,b);
printf("%d",result);



}