#include <stdio.h>

int main() {
    float x;
    double y;

    printf("Enter a float value: ");
    scanf("%f", &x);

    printf("Enter a double value: ");
    scanf("%lf", &y);

    printf("\n====================================\n");
    printf("        PRECISION COMPARISON        \n");
    printf("====================================\n");
    
    printf("Float value:\n");
    printf("Default : %f\n", x);
    printf("2 digits: %.2f\n", x);
    printf("4 digits: %.4f\n", x);
    printf("6 digits: %.6f\n", x);

    printf("\nDouble value:\n");
    printf("Default : %lf\n", y);
    printf("2 digits: %.2f\n", y);
    printf("4 digits: %.4f\n", y);
    printf("6 digits: %.6f\n", y);

    return 0;
}
