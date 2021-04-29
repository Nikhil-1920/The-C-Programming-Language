// reverse implementation
#include <stdio.h>
#include <string.h>

void reverse(char[]);

int main(void) {
	char a[] = "Hello, World!";
	reverse(a);
	printf("%s\n", a);
	return 0;
}

void reverse(char s[]) {
	int c, i, j;
	for(i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
