// strcpy() array implementation
#include <stdio.h>

void strcpyArray(char *, char *);

int main(void) {
	char t[] = "Hello, World!";
	char s[100];
	strcpyArray(s, t);
	printf("%s\n", s);

	return 0;
}

void strcpyArray(char *s, char *t) {
	int i = 0;

	while((s[i] = t[i]) != '\0')
		i++;
}

