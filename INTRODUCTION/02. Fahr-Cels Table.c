/*  Q.3. Modify the temperature conversion program 
    to print a heading above the table.
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
    printf("| Fahr\tCels |");
    printf("\n--------------\n");

    fahr = lower;
    while(fahr <= upper) {

        cels = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f\t%05.1f\n", fahr, cels);
        fahr += step;
    }
    return 0;
}
