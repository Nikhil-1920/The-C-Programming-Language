// strlen() address arithmetics
#include <stdio.h>

int strlen(const char *); 

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
	char *p = s;

	while(*p != '\0')
		p++;
	
	return p - s;
}

