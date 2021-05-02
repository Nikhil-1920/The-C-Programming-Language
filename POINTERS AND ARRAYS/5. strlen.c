// strlen implementation
#include <stdio.h>

int strlen(const char *s);

int main(void) {
	char arr[100];
	char *ptr = "Hello";

	int l = strlen("Hello, World!");
	printf("%d\n", l);

	l = strlen(arr);
	printf("%d\n", l);
	l = strlen(ptr);
	printf("%d\n", l);

	return 0;
}

int strlen(const char *s) {
	int n;

	for(n = 0; *s != '\0'; s++)
		n++;

	return n;
}