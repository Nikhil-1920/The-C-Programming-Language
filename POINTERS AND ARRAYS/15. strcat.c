// strcat() implementation using pointer
#include <stdio.h>

void mystrcat(char *, char *);

int main(void) {
	char s[100] = "Hello";
	char *t = ", World!";

	mystrcat(s, t);
	printf("%s\n", s);

	return 0;
}

void mystrcat(char *s, char *t) {
	while(*s)
		s++;

	while((*s++ = *t++));
}

