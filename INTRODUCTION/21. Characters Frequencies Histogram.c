// Characters Frequencies Histogram
#include <stdio.h>

int main(void) {
	int c, i, j;
	int histogram[26];

	for(i = 0; i <= 26; ++i)
		histogram[i] = 0;

	while((c = getchar()) != EOF) {
		if(c >= 'a' && c <= 'z') {
			histogram[c - 'a']++;
		}
	}

	for(i = 0; i < 26; ++i) {
		printf("%c: ", 'a' + i);
		for(j = 0; j < histogram[i]; ++j) {
			putchar('#');
		}
		putchar('\n');
	}
	return 0;
}
