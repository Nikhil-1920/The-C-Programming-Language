// Detab
#include <stdio.h>

int main(void) {
	int c, n, i;
	int cur = 0;

	n = 8;
	while((c = getchar()) != EOF) {
		if(c == '\t') {
			for(i = n - cur; i > 0; --i)
				putchar(' ');
			cur = 0;
		} 
		else {
			putchar(c);
			cur++;
			if(cur > n)
				cur = 0;
		}
	}
	return 0;
}
