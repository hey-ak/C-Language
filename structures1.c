#include <stdio.h>
#include <string.h>
struct student
{
    int number;
    float cgpa; 
    char name[100];
};



int main(){
    struct student s1;
    s1.cgpa = 7.6;
    s1.number = 75;
    strcpy(s1.name, "Rohit");
    printf("Number: %d\n", s1.number);
    printf("Name: %s\n", s1.name);
    printf("CGPA: %0.2f\n", s1.cgpa);
    printf("\n");
   
    struct student s2;
    s2.cgpa = 8.6;
    s2.number = 85;
    strcpy(s2.name, "Akshay");
    printf("Number: %d\n", s2.number);
    printf("Name: %s\n", s2.name);
    printf("CGPA: %0.2f\n", s2.cgpa);
    printf("\n");
    struct student s3;
    s3.cgpa = 9.0;
    s3.number = 95;
    strcpy(s3.name, "Aakash");
    printf("Number: %d\n", s3.number);
    printf("Name: %s\n", s3.name);
    printf("CGPA: %0.2f\n", s3.cgpa);

    return 0;
}