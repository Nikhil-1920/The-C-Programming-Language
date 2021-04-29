// trim implementation
#include <stdio.h>
#include <string.h>

int trim(char[]);

int main(void) {
	char s[1024] = "Nikhil";
	trim(s);
	printf("%s EOL\n", s);

	s[0] = '\0';
	trim(s);
	printf("%sEOL\n", s);

	s[0] = ' ', s[1] = ' ', s[2] = '\0';
	trim(s);
	printf("%sEOL\n", s);

	char a[1024] = "Nikhil Singh";
	trim(a);
	printf("%s EOL\n", a);

	return 0;
}

int trim(char s[]) {
	int n;

	for(n = strlen(s) - 1; n >= 0; n--)
		if(s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;

	s[n+1] = '\0';
	return n;
}
