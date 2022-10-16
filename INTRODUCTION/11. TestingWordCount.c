/*  How would you test the word count program? What kinds of input are most likely to uncover bugs if there are any?
*/

// Author: Nikhil Singh
// Last Modified: 22/02/2022


#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


int main(void) {

    FILE *fptr = NULL;

    unsigned long i = 0;
    static char *spaces = " \f\t\v";
    static char *alphab = "abcdefghijklmnopqrstuvwxyz";
    static char *alpha5 = "a b c d e f g h i j k l m "
                          "n o p q r s t u v w x y z "
                          "a b c d e f g h i j k l m "
                          "n o p q r s t u v w x y z "
                          "a b c d e f g h i j k l m "
                          "n\n";


    // Input file containing zero words
    fptr = fopen("test1", "w");
    assert(fptr != NULL);
    fclose(fptr);


    // Input file containing one huge word without newline
    fptr = fopen("test2", "w");
    assert(fptr != NULL);
    for(i = 0; i < (66000ul / 26 + 1); i++) { fputs(alphab, fptr); }
    
    fclose(fptr);


    // Input file containing different kinds of spaces
    fptr = fopen("test3", "w");
    assert(fptr != NULL);
    for(i = 0; i < (66000ul / 4 + 1); i++) { fputs(spaces, fptr); }
    
    fclose(fptr);


    // Input file containing words and different sorts of spaces
    fptr = fopen("test4", "w");
    assert(fptr != NULL);
    fputs("sequoia", fptr);
    for(i = 0; i < (66000ul / 26 + 1); i++) { fputs(spaces, fptr); }
    
    fputs("sequoia", fptr);
    fclose(fptr);


    // Input files contains 66000 newlines
    fptr = fopen("test5", "w");
    assert(fptr != NULL);
    for(i = 0; i < 66000ul; i++) { fputs("\n", fptr); }
    
    fclose(fptr);


    // Input files contains 66000 single letter words
    fptr = fopen("test6", "w");
    assert(fptr != NULL);
    for(i = 0; i < 1000; i++) { fputs(alpha5, fptr); }
    
    fclose(fptr);


    // Input files contains 66000 words without newline
    fptr = fopen("test7", "w");
    assert(fptr != NULL);
    for(i = 0; i < 66000ul; i++) { fputs("sequoia", fptr); }

    fclose(fptr);
    return 0;
}
