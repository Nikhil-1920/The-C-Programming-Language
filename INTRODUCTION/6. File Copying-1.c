// Copy Input To Output
#include <stdio.h>

int main(void) {
	char c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
	return 0;
}
