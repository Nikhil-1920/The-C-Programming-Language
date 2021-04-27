// Celsius-Fahrenheit Table
#include <stdio.h>

int main(void) {
	float fahr, cels;
	int lower, upper;
	int step;

	lower = 0;	    /* lower limit of temperature table */
	upper = 300;	/* upper limit of temperature table */
	step = 20;	    /* size of step */

	cels = lower;

	printf("Cels\tFahr\n");
	while(cels <= upper) {
		fahr = cels / (5.0 / 9.0) + 32.0;
		printf("%3.0f\t%3.1f\n", cels, fahr);
		cels += step;
	}
	return 0;
}
