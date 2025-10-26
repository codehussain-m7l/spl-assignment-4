#include <stdio.h>

struct Student {
    char name[50];   
    int age;         
    float grade;     
};

int main() {
    struct Student student1 = {"John Doe", 20, 88.5};

    printf("Student Name: %s\n", student1.name);
    printf("Student Age: %d\n", student1.age);
    printf("Student Grade: %.2f\n", student1.grade);

    return 0;
}