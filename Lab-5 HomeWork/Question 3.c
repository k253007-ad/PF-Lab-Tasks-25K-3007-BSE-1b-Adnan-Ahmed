#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant;
    printf("Enter Values of a, b and c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        printf("\nTwo Real Roots");
    }

    else if (discriminant == 0) {
        printf("\nOne Real Root");
    }

    else {
        printf("\nImaginary Roots");
    }

    return 0;
}