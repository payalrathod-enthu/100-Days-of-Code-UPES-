#include <stdio.h>
#include <stdlib.h>

// Nested Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Employee structure
struct Employee {
    char name[50];
    int emp_id;
    float salary;
    struct Date joining_date;
};

int main() {
    FILE *fp;
    struct Employee e;
    
    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.emp_id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &e.joining_date.day, &e.joining_date.month, &e.joining_date.year);

    // Write employee data to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data written to file successfully.\n");

    // Read employee data from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    fread(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Print employee details
    printf("\nEmployee Details from File:\n");
    printf("Name: %s\n", e.name);
    printf("Employee ID: %d\n", e.emp_id);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n", e.joining_date.day, e.joining_date.month, e.joining_date.year);

    return 0;
}
