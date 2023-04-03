#include <stdio.h>



int main(){
    char ch ;
    FILE *fptr;
   fptr= fopen("test.txt", "r");
    // fscanf(fptr, "%s", ch);
   fgetc(fptr);
   printf("%c\n", fgetc(fptr));
   printf("%c\n", fgetc(fptr));
   printf("%c\n", fgetc(fptr));
   printf("%c\n", fgetc(fptr));
   printf("%c\n", fgetc(fptr));

   return 0;
}