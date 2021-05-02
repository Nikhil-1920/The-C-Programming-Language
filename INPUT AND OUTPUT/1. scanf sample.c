// scanf sample implementation
#include <stdio.h>

int main(void) {
	double sum = 0, v;

	while(scanf("%1lf", &v) == 1)
		printf("\t%.2f\n", sum += v);
	return 0;
}

