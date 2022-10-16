/*  Rewrite the temperature conversion program of section 1.2 to use a function for conversion.
*/

// Author: Nikhil Singh
// Last Modified: 22/02/2022


#include <stdio.h>


void tempConvertorX(void);
void redColor(void) { printf("\033[0;91m"); }


// Driver function for testing tempConvertorX
int main(void) {

    tempConvertorX();
    return 0;    
}


void tempConvertorX(void) {

    int alter = 0;
    int lower = 0;
    int upper = 300;
    int steps = 20;

    float temp = lower;

    redColor();
    printf("\n----------------------------------------------");
    printf("\n|       TEMPERATURE CONVERTER FUNCTION       |");
    printf("\n----------------------------------------------");
    printf("\n1. Press {1} to convert Fahrenheit to Celsius.");
    printf("\n2. Press {2} to convert Celsius to Fahrenheit.");
    printf("\n----------------------------------------------");

    printf("\n\nWhat is your choice? (1/2):> ");
    scanf("%d", &alter);

    switch(alter) {

        case 1:
            printf("\n--------------\n");
            printf("| Fahr\tCels |");
            printf("\n--------------\n");
            
            while(temp <= upper) {
                
                float cels = (5.0 * (temp - 32) / 9.0);
                printf("%3.0f\t%05.1f\n", temp, cels);
                temp += steps;
            }
            
            printf("\n");
            break;

        case 2:
            printf("\n--------------\n");
            printf("| Cels\tFahr |");
            printf("\n--------------\n");
            
            while(temp <= upper) {
                
                float fahr = (9.0 / 5.0) * temp + 32;
                printf("%3.0f\t%05.1f\n", temp, fahr);
                temp += steps;
            }
            
            printf("\n");
            break;
        
        default:
            printf("\nOpted invalid choice!\n\n");
            break;
    }
}
