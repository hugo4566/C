#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;
}person;

typedef struct {
    char name[20];
    int age;
}person;

/* define the person struct here using the typedef syntax */
int main() {
    person john;
    /* testing code */
    strcpy(john.name,"John");
    john.age = 27;
    printf("%s is %d years old.\n", john.name, john.age);
}