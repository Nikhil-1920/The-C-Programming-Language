// Q.12. Write a program that prints its input one word per line.

// Author: Nikhil Singh
// Last Modified: 05/03/2022


#include <stdio.h>

int main(void) {

    int ch, prevChar = 0;
	
    while((ch = getchar()) != EOF) {

        if(ch == ' ' || ch == '\t' || ch == '\n') {		
            if(prevChar != ' ' && prevChar != '\t' && prevChar != '\n') 
                putchar('\n');
        }
        else
            putchar(ch);
        prevChar = ch;
    }
    
    return 0;
}
