#include <stdio.h>

int main() {
    char name;
    char roll;
    char sec;
    int age;          
    float num;
    char check;     

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);
    for(int i = 0; i < 50; i++) {
        if(name[i] == '\n') { name[i] = '\0'; break; }
    }

    printf("Enter roll number: ");
    scanf("%s", roll);

    printf("Enter section character: ");
    scanf(" %c", &sec);

    printf("Enter student age: ");
    scanf("%d", &age);

    printf("Enter a floating point value: ");
    scanf("%f", &num);
    
    while(getchar() != '\n'); 

    printf("Press a single key to approve log details: ");
    check = getchar();

    puts("\n========================================");
    puts("        PROGRAMMING FUNDAMENTALS        ");
    puts("========================================");

    printf("Name    \t: %s\n", name);
    printf("Roll No \t: %s\n", roll);
    printf("Section \t: %c\n", sec);
    printf("Age Value\t: %d\n\n", age);

    printf("C Topics:\n");
    printf("\t1. Variables\n");
    printf("\t2. Data Types\n");
    printf("\t3. Input/Output\n");
    printf("\t4. Format Specifiers\n");
    printf("\t5. Escape Sequences\n\n");

    printf("Sample Character: \'A\'\n");
    printf("Sample Question: \"What is C?\"\n\n");

    printf("Floating Value:\n");
    printf("Default : %f\n", num);
    printf("2-digit : %.2f\n", num);
    printf("4-digit : %.4f\n", num);
    
    printf("Confirmation Status: ");
    putchar(check);
    putchar('\n');
    
    puts("========================================");

    return 0;
}
