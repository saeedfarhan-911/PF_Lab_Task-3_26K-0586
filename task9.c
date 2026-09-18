#include <stdio.h>

int main() {
    char name;
    char roll;
    char sec;
    int age;
    float gpa;
    float height;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);
    for(int i = 0; i < 50; i++) {
        if(name[i] == '\n') { name[i] = '\0'; break; }
    }

    printf("Enter roll number: ");
    scanf("%s", roll);

    printf("Enter section character: ");
    scanf(" %c", &sec);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter CGPA: ");
    scanf("%f", &gpa);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("\n========================================\n");
    printf("             STUDENT REPORT             \n");
    printf("========================================\n");
    printf("Field\t\tValue\n");
    printf("----------------------------------------\n");
    printf("Name\t\t%s\n", name);
    printf("Roll Number\t%s\n", roll);
    printf("Section\t\t%c\n", sec);
    printf("Age\t\t%d\n", age);
    printf("CGPA\t\t%.2f\n", gpa);
    printf("Height\t\t%.2f\n", height);
    printf("----------------------------------------\n");

    return 0;
}
