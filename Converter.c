//input = 1 >>converting time - hours to minutes and seconds
//input = 2 >>converting distance - km to m
//input = 3 >>finding area of any shape
//input = 4 >>finding volume of any shape
//input = 5 >>converting temperature - F to C and C to F 

#include <stdio.h>
#include <string.h>

int main() {
    printf("\ninput = 1 >>converting time - hours to minutes and seconds");
    printf("\ninput = 2 >>converting distance - km to m");
    printf("\ninput = 3 >>finding area of square");
    printf("\ninput = 4 >>finding volume of cuboid");
    printf("\ninput = 5 >>converting temperature - F to C and C to F ");

    int input;
    printf("\nEnter the input: ");
    scanf("%i", &input);

    if (input < 6 && input > 0) {
        
        if (input == 1) {
            printf("\n--Converting Time--");
            //1hr = 60min
            //1min = 60sec

            float h,m,s;

            //taking input of time
            printf("\nEnter time in hour: ");
            scanf("%f", &h);

            m = h*60;
            s = m*60;

            printf("\n\tMinutes: %.2f", m);
            printf("\n\tSeconds: %.2f", s);

        } else if (input == 2) {
            printf("\n--Converting distance--");
            //1km = 1000m

            float km,meter;
            printf("\nEnter distance in KM: ");
            scanf("%f", &km);

            meter = km*1000;
            printf("\nDistance in meter: %.2f", meter);
        } else if(input == 3) {
            printf("\n--Finding area of a sqaure--");
            //area of sqare = side * side
           
            float s, area;
            printf("\nEnter length of side of square: ");
            scanf("%f", &s);
            area = s*s;

            printf("Area of square = %.2f", area);
            
        } else if(input == 4) {
            printf("\n--Finding volume of a cuboid--");
            
            float l,b,h,v;
            printf("\nEnter length of cuboid: ");
            scanf("%f", &l);

            printf("\nEnter breadth of cuboid: ");
            scanf("%f", &b);

            printf("\nEnter height of cuboid: ");
            scanf("%f", &h);
            
            v = l*b*h;
            printf("\n\tVolume of cuboid = %.2f", v);
            
        } else if (input == 5) {
            printf("\n--Conversion of temperature--");
            // F = (C*1.8)+32
            // C = (F-32)/1.8

            float f,c;
            printf("\nEnter temperature in celcius: ");
            scanf("%f", &c);

            f = (c*1.8)+32;
            printf("\nTemperature in farenheit = %.2f", f);
        }
        
    } else {
        printf("\nEnter valid input number!!");
    }
    

    return 0;
}
