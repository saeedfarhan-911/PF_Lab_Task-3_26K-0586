#include <stdio.h>

int main() {
    char name[40];
    int roll;
    int age;
    float height;
    float gpa;
    char sec;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Roll No: ");
    scanf("%d", &roll);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Height: ");
    scanf("%f", &height);

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    printf("Enter Section: ");
    scanf(" %c", &sec); 

    printf("\nSTUDENT INFORMATION\n");
    printf("Name     : %s\n", name);
    printf("Roll No  : %d\n", roll);
    printf("Age      : %d\n", age);
    printf("Height   : %.1f\n", height);
    printf("GPA      : %.2f\n", gpa);
    printf("Section  : %c\n", sec);

    return 0;
}
