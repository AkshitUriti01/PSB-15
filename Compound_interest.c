// compound interest 
#include <stdio.h>
#include <math.h>

int main() {
    float p,r,t;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    
    printf("Enter time: ");
    scanf("%f", &t);
    
    float CI = p * (pow(1+(r/100), t));
    printf("Compoud Interest is: %.2f", CI);
    
    return 0;
}
