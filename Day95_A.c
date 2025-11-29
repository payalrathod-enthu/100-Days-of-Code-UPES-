#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find top student and return the structure
struct Student topStudent(struct Student students[], int n) {
    int i, maxIndex = 0;

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return students[maxIndex];
}

int main() {
    struct Student students[5], top;
    int i, n = 5;

    // Input student details
    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Get top student
    top = topStudent(students, n);

    // Print top student's details
    printf("Top Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
