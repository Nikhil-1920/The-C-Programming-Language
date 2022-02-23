/*  Q.8. Write a program to count blanks, tabs, and newlines.  */

// Author: Nikhil Singh
// Last Modified: 20/02/2022


#include <stdio.h>

int main(void) {

    int blanks = 0;
    int tabs = 0;
    int newline = 0;

    char ch;
    while((ch = getchar()) != EOF) {
        if(ch == '\n') newline++;
        if(ch == '\t') tabs++;
        if(ch == ' ') blanks++; 
    }
    
    printf("\nBlanks count:> %d", blanks);
    printf("\nTabs count:> %d", tabs);
    printf("\nNewlines count:> %d\n", newline);
    return 0;
}
