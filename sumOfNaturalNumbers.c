#include<stdio.h>
int main(){
int n;
int sum=0;
printf("Enter Number\n");
scanf("%d",&n);
for (int i = 1; i <=n; i++)
{
     sum= sum+i;
}
printf("%d\n",sum);

for (int i = n; i>=1; i--)
{
    printf("%d ",i);
}






    return 0;
}