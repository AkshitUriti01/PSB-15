// finding angle in a triangle
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter first angle: ");
    scanf("%i", &a);
    
    if (a<0 || a>179) {
        printf("Enter correct value of angle.");
    } else {
        printf("Enter second angle: ");
        scanf("%i", &b);
    
    if (b<0 || b>179) {
        printf("Enter correct value of angle.");
        } else {
            c = 180 - (a+b);
            printf("Third angle is: %i", c);
        }
    }
    
  
    return 0;
}
