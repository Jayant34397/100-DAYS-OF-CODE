/*WRITE A PROGRAM TO STORE THE DATA OF 3 STUDENTS*/

#include <stdio.h>
#include <string.h>



struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    s1.roll = 590034397;
    s1.cgpa = 9.3;
    strcpy(s1.name, "Jayant");

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    struct student s2;
    s2.roll = 590034394;
    s1.cgpa = 8.6;
    strcpy(s2.name, "amit");

    printf("student name = %s\n", s2.name);
    printf("student roll = %d\n", s2.roll);        
    printf("student cgpa = %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 590034399;
    s3.cgpa = 9.1;
    strcpy(s3.name, "rohit");

    printf("student name = %s\n", s3.name);
    printf("student roll = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);

    return 0;
}