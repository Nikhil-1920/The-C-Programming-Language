// alloc() implementation
#include <stdio.h>
#include <stddef.h>

char *alloc(int);
void afree(char *);

// Compile with 6. alloc.c
int main(void) {
	char *p = alloc(10);
	if(NULL == p)
		return -1;

	*p++ = 'H';
	*p++ = 'e';
	*p++ = 'l';
	*p++ = 'l';
	*p++ = 'o';
	*p++ = '\0';
	p -= 6;

	printf("%s\n", p);

	afree(p);

	printf("%s\n", p);

	p = alloc(10001);

	if(NULL == p)
		printf("overflow!\n");

	printf("%p\n", NULL);

	return 0;
}

