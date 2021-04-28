// Fahr-Cels Table Function
#include <stdio.h>

float FahrToCels(float fahr) {
	return (5.0 / 9.0) * (fahr - 32.0);
}

int main(void) {
	float fahr;
	int lower, upper, step;

	lower = 0;	    /* Lower Limit Of Temperature Table */
	upper = 300;	    /* Upper Limit */
	step  = 20;	    /* Step Size */

	fahr = lower;

	printf("Fahr\tCels\n");
	while(fahr <= upper) {
		printf("%3.0f\t%3.1f\n", fahr, FahrToCels(fahr));
		fahr = fahr + step;
	}
	return 0;
}

