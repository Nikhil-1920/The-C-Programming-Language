/*  Q.2. Experiment to find out what happens when 
    printf 's argument string contains \c, where c 
    is some character not listed above.
*/

// Author: Nikhil Singh
// Last Modified: 20/02/2022


#include <stdio.h>

int main(void) {

    printf("\nBell alert (0x07):> '\\a'");
    printf("\nBackspace (0x08):> '\\b'");
    printf("\nHorizontal tab (0x09):> '\\t'");
    printf("\nNewline char (0x0A):> '\\n'");
    printf("\nVertical tab (0x0B):> '\\v'");
    printf("\nFormfeed (0x0C):> '\\f'");
    printf("\nCarriage return (0x0D):> '\\r'");
    printf("\nDouble quotes (0x22):> '\"'");
    printf("\nSingle quotes (0x27):> '\''");
    printf("\nQuestion mark (0x3F):> '\?'");
    printf("\nBackslash (0x5C):> '\\\\'");
    printf("\nEscape character (0x1B):> '\\e'");
    printf("\n\n");
    return 0;
}