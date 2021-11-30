// Find minimum among three numbers.

#include <stdio.h>
void min();
int main() {
    min();

    return 0;
}

void min() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %i", &a, &b, &c);

    if (a<=b && a<=c) {
        printf("%i is the smallest among the three." ,a);
    } else if (b<=c && b<=a) {
        printf("%i is the smallest among the three.", b);
    } else if (c<=a && c<=b) {
        printf("%i is the smallest among the three.", c);
    }
}