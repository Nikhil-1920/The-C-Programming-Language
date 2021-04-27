// Fahrenheit-Celsius Table
#include <stdio.h>

int main(void) {
	int fahr, cels;
	int lower, upper;
	int step;

	lower = 0;	     /* lower limit of temperature table */
	upper = 300;	    /* upper limit of temperature table */
	step = 20;	   /* size of step*/

        fahr = lower;
        
        printf("Fahr\tCels\n");
	while(fahr <= upper) {
		cels = 5 * (fahr-32) / 9;
		printf("%3d\t%3d\n", fahr, cels);
		fahr = fahr + step;
	}
        return 0;
}

