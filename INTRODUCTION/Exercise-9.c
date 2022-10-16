/*  Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
*/

// Author: Nikhil Singh
// Last Modified: 20/02/2022


#include <stdio.h>

int main(void) {

    char current, previous = EOF;

    while((current = getchar()) != EOF) {

        if(current == ' ') {
            
            if(previous != current) { putchar(current); }
        }
        
        if(current != ' ') { putchar(current); }

        // Following current character
        previous = current;
    }
    
    return 0;
}
