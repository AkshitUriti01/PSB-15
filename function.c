#include <stdio.h>
int sum();
int main() {
    int result;   
    printf("\nGoing to calculate the sum of two numbers:");  
    result = sum();  
    printf("%d",result);  

    return 0;
}

int sum() {
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    return a+b;
}