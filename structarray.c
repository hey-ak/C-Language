#include <stdio.h>
#include <string.h>
typedef struct student
{
    int number;
    float cgpa; 
    char name[100];
} st;
void printinfo(struct student s1){
    printf("CGPA: %f\n", s1.cgpa);
    printf("Number: %d\n", s1.number);
    printf("Name: %s\n", s1.name);
}


int main(){
    // struct student CS[100] = {85, 9.96, "Akshay"};
    st s1;
    s1.cgpa = 7.96;
    s1.number = 79;
    strcpy(s1.name, "Akshay");
    printinfo(s1);

    return 0;
}