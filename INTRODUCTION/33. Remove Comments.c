// Remove Comments
#include <stdio.h>
#define OUT_STRING 0
#define IN_STRING  1

#define OUT_COMMENT 0
#define IN_COMMENT  1
#define IN_ONE_LINE_COMMENT 2

int main(void) {
	int c, preChar;;
	int status, stringStatus;

	printf("/*asdqwe*/");

	status = OUT_COMMENT;
	stringStatus = OUT_STRING;

	while((c = getchar()) != EOF) {
		/*	This is the comment for test */
		if(status == OUT_COMMENT) {
			if(stringStatus == OUT_STRING) {
				if(c == '"') {
					stringStatus = IN_STRING;
					putchar(c);
					continue;
				}

				if(c == '/' && preChar == '/') {
					status = IN_ONE_LINE_COMMENT;
					preChar = '\n';
					continue;
				} 

				else if(c == '/') {
					preChar = c;
					continue;
				}

				if(c == '*' && preChar == '/') {
					status = IN_COMMENT;
				} 
				else if(preChar == '/') {
					putchar('/');
					putchar(c);
				} 
				else {
					putchar(c);
				}
			} 
			else {
				if(c == '"') {
					stringStatus = OUT_STRING;
					putchar(c);
				} 
				else {
					putchar(c);
				}
			}
		} 
		else if(status == IN_ONE_LINE_COMMENT) {
			if(c == '\n') {
				putchar('\n');
				status = OUT_COMMENT;
			}
		} 
		else {
			if(c == '/' && preChar == '*') {
				status = OUT_COMMENT;
				preChar = 0;			
				continue;	
			}
		}
		preChar = c;
	}
	printf("// test one line comment");
	return 0;
}
