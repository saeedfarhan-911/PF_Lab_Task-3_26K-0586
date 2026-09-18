#include <stdio.h>

int main() {
    char name[50];
    char city[30];
    char uni[50];
    char dept[40];

    printf("Enter Full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter City: ");
    fgets(city, sizeof(city), stdin);

    printf("Enter University: ");
    fgets(uni, sizeof(uni), stdin);

    printf("Enter Department: ");
    fgets(dept, sizeof(dept), stdin);

    puts("\n========================================");
    puts("            STUDENT PROFILE             ");
    puts("========================================");

    printf("Name        : %s", name);
    printf("City        : %s", city);
    printf("University  : %s", uni);
    printf("Department  : %s", dept);

    puts("========================================");

    return 0;
}
