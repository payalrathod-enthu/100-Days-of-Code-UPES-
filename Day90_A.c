#include <stdio.h>

// Enum for Gender
enum Gender {MALE, FEMALE, OTHER};

// Struct for Person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    // Input person details
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", (int*)&p.gender); // cast to int* for scanf

    // Array of gender names for printing
    const char *genderNames[] = {"MALE", "FEMALE", "OTHER"};

    // Print person's details
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %s\n", genderNames[p.gender]);

    return 0;
}
