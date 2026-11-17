/*Create Employee structure with nested Date structure for joining date and print details.*/


#include <stdio.h>

// Structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Structure for Employee
struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;  // Nested structure
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d",
          &emp.joiningDate.day,
          &emp.joiningDate.month,
          &emp.joiningDate.year);

    // Display employee details
    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);

    printf("Joining Date: %02d-%02d-%d\n",
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);

    return 0;
}
