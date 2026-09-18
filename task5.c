#include <stdio.h>

int main() {
    int a;
    unsigned int b;
    float c;
    double d;
    char e;
    long int f;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter an unsigned integer: ");
    scanf("%u", &b);

    printf("Enter a float: ");
    scanf("%f", &c);

    printf("Enter a double: ");
    scanf("%lf", &d);

    printf("Enter a character: ");
    scanf(" %c", &e);

    printf("Enter a long integer: ");
    scanf("%ld", &f);

    printf("\n--- Integer Display Formats ---\n");
    printf("Decimal: %d\n", a);
    printf("Octal: %o\n", a);
    printf("Hex lowercase: %x\n", a);
    printf("Hex uppercase: %X\n", a);

    printf("\n--- Floating Point Display Formats ---\n");
    printf("Format %%f: %f\n", c);
    printf("Format %%e: %e\n", c);
    printf("Format %%g: %g\n", c);

    return 0;
}
