
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter first number: ");
    scanf("%i", &a);
    
    printf("Enter second number: ");
    scanf("%i", &b);
    
    printf("Enter third number: ");
    scanf("%i", &c);
    
    if (a>b) {
        if (a>c) {
            printf("First number is largest.");
        } else { //a < c
            printf("Third number is largest.");
        }
    } else { // b>a
        if (b>c) {
            printf("Second number is largest.");
        } else { //c>b
            printf("Third number is largest.");
        }
    }
    
    return 0;
}
