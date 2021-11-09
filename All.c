#include <stdio.h>

int main() {
    int i;
    printf("--Welcome to coversion calculator--");
    printf("\nEnter the input value: ");
    scanf("%d", &i);

    if (i<1) {
        printf("\nEnter valid input value!!");
    } else {

    if (i==1) {
        while (i>0) {
                    
        printf("\n--Converting time from hour to minutes and seconds--");
        float hour;
        printf("\nEnter time in hours: ");
        scanf("%f", &hour);

        float min = hour*60;
        float sec = min*60;

        printf("\nMinutes= %.2f", min);
        printf("\nSeconds= %.2f", sec);
          
            }
        //     char j;
        // printf("\nDo you want to convert again(y/n)?");
        // scanf("%c", &j);
        // if (j=='n') {
        //     break;
        //         }  
        }
    }
    return 0;
}