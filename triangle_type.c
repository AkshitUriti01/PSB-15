// Check whether the triangle is equilateral, isosceles, or scalene triangle.

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the length of 3 sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // a = b = c --> equilateral triangle
    // a != b != c --> scalene triangle
    // a = b || b = c || c = a --> isoscles triangle

    if (a==b && b ==c) {
        printf("Equilateral Triangle");
    } else if (a!=b && b!=c) {
        printf("Scalene Triangle");
    } else if (a==b || b==c || c==a) {
        printf("Isoscles Triangle");
    }

    return 0;
}