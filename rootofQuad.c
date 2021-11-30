#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    printf("Enter the 3 coefficients of quadratic equation: ");
    scanf("%i %i %i", &a, &b, &c);

    float x1 = ((-1*b) + sqrt(b*b - 4*a*c))/(2*a);
    float x2 = ((-1*b) - sqrt(b*b - 4*a*c))/(2*a);

    printf("\nFirst root: %.2f", x1);
    printf("\nSecond root: %.2f", x2);

    return 0;
}