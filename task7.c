#include <stdio.h>

int main() {
    char c1, c2, c3;

    printf("Enter first character: ");
    c1 = getchar();
    getchar(); 

    printf("Enter second character: ");
    c2 = getchar();
    getchar(); 

    printf("Enter third character: ");
    c3 = getchar();

    printf("\nCharacters Entered:\n");
    printf("Character 1: ");
    putchar(c1);
    putchar('\n');

    printf("Character 2: ");
    putchar(c2);
    putchar('\n');

    printf("Character 3: ");
    putchar(c3);
    putchar('\n');

    return 0;
}
