/*  Q.14. Write a program to print a histogram of the frequencies 
    of different characters in its input.
*/

// Author: Nikhil Singh
// Last Modified: 05/03/2022


#include <stdio.h>

int main(void) {

    int charFrequency[94], ch;
    int height = 0, idx = 0;

    for(idx = 0; idx < 94; ++idx) {
        charFrequency[idx] = 0;
    }

    while((ch = getchar()) != EOF) {

        if(ch >= 33 && ch <= 126) {
            ++charFrequency[ch - 33];
            if(charFrequency[ch - 33] >= height) {
                height = charFrequency[ch - 33];
            }
        }
    }

    for(idx = height; idx > 0; --idx) {

        printf("%4d|", idx);
        for(int j = 0; j < 94; ++j) {
            if(charFrequency[j] >= idx) 
                printf("#");
            else 
                printf(" ");
        }

        printf("\n");
    }

    printf("    +");

    for(idx = 0; idx < 94; ++idx)  
        printf("-");
    printf("\n     ");

    for(idx = 0; idx < 94; ++idx)  
        printf("%c", idx + 33);
    printf("\n");

    return 0;
}
