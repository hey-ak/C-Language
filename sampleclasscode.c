#include <stdio.h>

typedef struct {
    int roll;
    int age;
} Person;

int main() {
    Person person1;
    person1.roll=127;
    person1.age = 19;

    printf("roll: %d\n", person1.roll);
    printf("Age: %d\n", person1.age);

    return 0;
} 