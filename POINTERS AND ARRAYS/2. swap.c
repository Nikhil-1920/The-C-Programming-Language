// swapping of two numbers
#include <stdio.h>

void swap(int*, int*);

int main(void) {
	int x, y;
	x = 50;
	y = 25;

	swap(&x, &y);
	printf("x = %d, y = %d\n", x, y);
	return 0;
}

void swap(int *px, int *py) {
	int temp;

	temp = *px;
	*px  = *py;
	*py  = temp;
}

