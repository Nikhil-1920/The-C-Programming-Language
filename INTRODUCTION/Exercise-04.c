/*  Write a program to print the corresponding Celsius to Fahrenheit table.
*/

// Author: Nikhil Singh
// Last Modified: 20/02/2022


#include <stdio.h>

// Function to display red color text
void redColor(void) { printf("\033[0;91m"); }


int main(void) {

    float fahr, cels;
    int upper, lower;
    int step;

    lower = 0;              // lower limit 
    upper = 300;            // upper limit
    step = 20;              // steps size

    redColor();
    printf("\n--------------\n");
    printf("| Cels\tFahr |");
    printf("\n--------------\n");

    cels = lower;
    while(cels <= upper) {

        fahr = ((9.0 / 5.0) * cels) + 32;
        printf("%3.0f\t%05.1f\n", cels, fahr);
        cels += step;
    }
    
    return 0;
}
