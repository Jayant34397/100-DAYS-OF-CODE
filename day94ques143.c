/*Write a function that accepts a structure as parameter and prints its members.*/

#include <stdio.h>


struct Student
{
    int rollno;
    char name[50];
    float marks;
};


void display(struct Student s)
{
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s1;

    
    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollno);

    printf("Enter Name: ");
    scanf("%49s", s1.name);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    
    display(s1);

    return 0;
}