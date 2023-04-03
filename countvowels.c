#include<stdio.h>
int countVowels(char arr[]){
    int count = 0;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        if (arr[i]=='a'|| arr[i]=='e'||arr[i]=='i'|| arr[i]=='o'||arr[i]=='u'
        ||arr[i]=='A'|| arr[i]=='E'||arr[i]=='I'|| arr[i]=='O'||arr[i]=='U')
        {
            count++;
        }
       
    }
     return count;

}


int main(){
    char str[50] = "Akshay";
    printf("%d",countVowels(str));

    return 0;
}