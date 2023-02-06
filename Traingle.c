#include<stdio.h>
#include<math.h>
int main(){
        int a ,b,c;
    printf("Enter Number 1");
    scanf("%d",&a);
    printf("Enter Number 2");
    scanf("%d",&b);
    printf("Enter Number 3");
    scanf("%d",&c);

    if (a==b && b==c)
    {
        
        printf("Equilateral");
    }  else if (a==b || b==c ||c==a)
    {
        printf("Isosceles");
    }
    else if (pow(a,2)+pow(b,2)==pow(c,2) ||pow(b,2)+pow(c,2)==pow(a,2)||pow(c,2)+pow(a,2)==pow(b,2) )
    {
        printf("Right Angled");

    }
    
    else
    {
        printf("Scalene");
    }
    
    
    
}