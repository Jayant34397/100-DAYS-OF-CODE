/*Return a structure containing top student's details from a function.*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

struct Student getTopStudent()
{
    struct Student s1, s2;

    printf("Enter first student's name, roll number and marks:\n");
    scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);

    printf("Enter second student's name, roll number and marks:\n");
    scanf("%s %d %f", s2.name, &s2.roll, &s2.marks);

    if (s1.marks > s2.marks)
        return s1;
    else
        return s2;
}

int main()
{
    struct Student top;

    top = getTopStudent();

    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}