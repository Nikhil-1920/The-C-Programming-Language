// strncpy() implementation using pointer
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *mystrncpy(char *, char *, int);

int main(void) {
	char s[100];
	char *ct = "hello, world!";
	char *t = mystrncpy(s, ct, 5);

	printf("%s\n", s);
	printf("%s\n", t);

	t = strncpy(s, ct, 8);
	printf("%s\n", t);

	return 0;
}

char *mystrncpy(char *s, char *ct, int n) {
	char *start = s;
	for( ; n > 0 && *ct != '\0'; n--) {
		*s++ = *ct++;
	}

	while(n-- > 0)
		*s++ = '\0';

	return start;
}

