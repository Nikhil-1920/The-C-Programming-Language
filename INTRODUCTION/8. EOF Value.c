// Printing EOF Value
#include <stdio.h>

int main(void) {
	int c;

	c = getchar() != EOF;
	printf("%d\n", c);
	putchar(c);
	return 0;
}
