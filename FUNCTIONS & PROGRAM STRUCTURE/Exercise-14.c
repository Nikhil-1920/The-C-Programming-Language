#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define swap(t, x, y) { t z = x; x = y; y = z; }

int main(void) {

    double x = 100.5;
    double y = 200.5;
    
}



int main(void) {

      
    char *px = "hello";
    char *py = "world";

    double a = 100.5;
    double b = 200.9;

	printf("\nBefore swap: a = %d and b = %d\n", a, b);
	swap(int, a, b);
	printf("\nAfter swap: a = %d and b = %d\n", a, b);
    
    printf("\nBefore swap: px = %d and py = %d\n", a, b);
	swap(int, px, py);
	printf("After swap: px = %d and py = %d\n", a, b);
    return 0;
}

