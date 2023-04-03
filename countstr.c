#include<stdio.h>
#include<string.h>
// int countstr(char arr[]){
//     int i = 0;
//     int count = 0;
//     while (arr[i]!='\0')
//     {
//         count++;
//         i++;
//     }
//     return count;
// }



int main(){
    char firststr[100];
    gets(firststr);
     
    char secondstr[50];
    gets(secondstr);
    // string copy function
    // printf("new str %s\n", newstr);
    // strcpy(newstr, oldstr);

    // printf("changed str : %s", newstr);
// string concatination function
    // strcat(newstr, oldstr);
    // printf("Concatinated %s ", newstr);
    // string comparision function
   printf("%d",strcmp(firststr, secondstr));
   // first - second 


    return 0;
}