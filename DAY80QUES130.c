/*Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record.*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, n, i;
    float marks;

    fp = fopen("student.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("student.txt", "r");

    printf("\nStudent Records:\n");

    while(fscanf(fp, "%s %d %f", name, &roll, &marks) == 3)
    {
        printf("\nName: %s", name);
        printf("\nRoll Number: %d", roll);
        printf("\nMarks: %.2f\n", marks);
    }

    fclose(fp);

    return 0;
}