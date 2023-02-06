#include<stdio.h>
int main(){
    // for (int i = 0; i <=10; i++)
    // {
    //     printf("%d\n",i);
    // }
    int n;
    printf("Enter The Number\n");
    scanf("%d",&n);
    int i=1;
    // while (i<=n)
    // {
    //     printf("%d\n",i);
    //     i++;
    // }
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    
    
    return 0;
}