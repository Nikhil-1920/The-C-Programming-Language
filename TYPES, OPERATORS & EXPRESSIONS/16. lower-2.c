// lower implementation
#include <stdio.h>

int lower(int);

int main(void) {
	printf("%c\n", lower('S'));
	printf("%c\n", lower('A'));
	printf("%c\n", lower('Z'));
	printf("%c\n", lower('a'));

	return 0;
}

int lower(int c) {
	return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}

