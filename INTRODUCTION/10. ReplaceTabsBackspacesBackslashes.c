/*  Write a program to copy its input to its output, replacing each 
    tab by \t, each backspaces by \b, and each backslash by \\. This 
    makes tabs and backspaces visible in an unambiguous way.
*/

// Author: Nikhil Singh
// Last Modified: 20/02/2022


#include <stdio.h>

int main(void) {

    int ch, isModified = 0;
    while((ch = getchar()) != EOF) {

        isModified = 0;
        if(ch == '\t') {
            putchar('\\');
            putchar('t');
            isModified = 1;
        }
        
        if(ch == '\b') {
            putchar('\\');
            putchar('b');
            isModified = 1;
        }

        if(ch == '\\') {
            putchar('\\');
            putchar('\\');
            isModified = 1;
        }

        if(isModified == 0) putchar(ch);
    }
    return 0;
}
