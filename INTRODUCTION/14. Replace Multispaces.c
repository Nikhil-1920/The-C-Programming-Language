// Replace Multispaces
#include <stdio.h>

int main(void) {
	int c, pre;

	while((c = getchar()) != EOF) {
		if(c != ' ' || pre != ' ') {
			putchar(c);
		}
		pre = c;
	}
	return 0;
}
