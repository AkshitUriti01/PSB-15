//  finding remainder without using %
#include <stdio.h>

int main() {
    int num1,num2;
    printf("Enter numerator: ");
    scanf("%d", &num1);
    
    printf("Enter denominator: ");
    scanf("%d", &num2);
    
    int q = num1 / num2;
    int r = num1 - (q * num2);
    
    printf("Remainder: %i", r);
    
    return 0;
}
