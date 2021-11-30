// 4 operations using switch cases
#include <stdio.h>

int main() {
    int i;
    float a,b;
    printf("Enter input: ");
    scanf("%i", &i);

    printf("Enter a and b: ");
    scanf("%f %f", &a, &b);

    switch (i) {
        case 1: //addition
            printf("Sum= %.2f", a+b);
            break;
        case 2: //subtraction
            printf("Difference = %.2f", a-b);
            break;
        case 3: //multiplication
            printf("Multiplication = %.2f", a*b);
            break;
        case 4: //division
            printf("Division = %.2f", a/b);
            break;
        default:
            printf("Enter correct input value.");
            break;
    }

    return 0;
}