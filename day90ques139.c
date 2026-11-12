/*Define a structure Student with name, roll_no, and marks, then read and print one student's data.*/


#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll no: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%d", &s.marks);

    printf("Student Details:\n");
    printf("Name = %s\n", s.name);
    printf("Roll No = %d\n", s.roll_no);
    printf("Marks = %d\n", s.marks);

    return 0;
}
