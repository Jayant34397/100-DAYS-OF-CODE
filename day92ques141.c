/*Store details of 5 students in an array of structures and print all.*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Student Details:\n");

    for (i = 0; i < 5; i++) {
        printf("details of Student %d:\n", i);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %f\n", s[i].marks);
    }

    return 0;
}