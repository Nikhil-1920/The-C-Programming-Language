/*  Write the function strrindex(s,t), which returns the position
    of the rightmost occurrence of t in s, or -1 if there is none.
*/

// Author: Nikhil Singh
// Last Modified: 14/10/2022


#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int strrindex(char s[], char t[]) {

    int index = -1, i = 0, j = 0, k = 0;

    for(i = strlen(s) - strlen(t); i >= 0; i--) {

        for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
        if(k > 0 && t[k] == '\0') { return i; }
    }
 
    return index;   
}


int main(void) {

    char s[] = "codechef";
    char t[] = "ef";
    int index = strrindex(s, t);

    if(index >= 0) { 

        printf("\n'%s' occurs in '%s' at index %d.\n", t, s, index);
    }

    else { printf("'%s' never occurs in '%s' at all.\n", t, s); }
    return 0;
}
