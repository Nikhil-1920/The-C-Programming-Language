// Fahrenheit-Celsius Reverse Table
#include <stdio.h>

int main(void) {
	int fahr;
	float cels;

	printf("Fahr\tCels\n");
	for(fahr = 300; fahr >= 0; fahr = fahr - 20) {
        cels = (5.0 / 9.0) * (fahr - 32);
		printf("%3d\t%3.1f\n", fahr, cels);
	}
	return 0;
}
