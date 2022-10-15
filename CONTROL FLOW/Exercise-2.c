/*  Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences 
    like \n and \t as it copies the string t to s. Use a switch. Write a function for the other direction as 
    well, converting escape sequences into the real characters.
*/

// Author: Nikhil Singh
// Last Modified: 22/02/2022


#include <stdio.h>


void escape(char s[], char t[]);
void unescape(char s[], char t[]);


int main(void) {

    // Testing string for implementing the above functions
    char test1[50] = "Brevity\vis thee\b soul of \"wit\"\n";
    char test2[50];

    printf("\nTesting string:> %s\n", test1);

    escape(test2, test1);
    printf("\nEscaped string:> %s\n", test2);

    unescape(test1, test2);
    printf("\nUnscaped string:> %s\n", test1);
    return 0;
}


/*  escape() copies string t to string s, converting special 
    characters into their appropriate escape sequences.  */
void escape(char s[], char t[]) {

    // counters for tracking characters
    int i = 0;
    int j = 0;

    while(t[i]) {

        switch(t[i]) {

            case '\n':
                s[j++] = '\\';
                s[j] = 'n';
                break;

            case '\t':
                s[j++] = '\\';
                s[j] = 't';
                break;

            case '\a':
                s[j++] = '\\';
                s[j] = 'a';
                break;

            case '\b':
                s[j++] = '\\';
                s[j] = 'b';
                break;

            case '\f':
                s[j++] = '\\';
                s[j] = 'f';
                break;

            case '\r':
                s[j++] = '\\';
                s[j] = 'r';
                break;

            case '\v':
                s[j++] = '\\';
                s[j] = 'v';
                break;

            case '\\':
                s[j++] = '\\';
                s[j] = '\\';
                break;

            case '\"':
                s[j++] = '\\';
                s[j] = '\"';
                break;

            default:
                s[j] = t[i];
                break;
        }
        i++;
        j++;

    }
    // Copying null character
    s[j] = t[i];
}


/*  unscape() copies string t to string s, converting escape 
    sequences into their appropriate special characters.  */
void unescape(char s[], char t[]) {

    // counters for tracking characters
    int i = 0;
    int j = 0;

    while(t[i]) {

        switch(t[i]) {

            case '\\':
                
                // Escape sequence found, translating...
                switch(t[++i]) {

                    case 'n':
                        s[j] = '\n';
                        break;
                    
                    case 't':
                        s[j] = '\t';
                        break;
                    
                    case 'a':
                        s[j] = '\a';
                        break;

                    case 'b':
                        s[j] = '\b';
                        break;

                    case 'f':
                        s[j] = '\f';
                        break;

                    case 'r':
                        s[j] = '\r';
                        break;

                    case 'v':
                        s[j] = '\v';
                        break;

                    case '\\':
                        s[j] = '\\';
                        break;

                    case '\"':
                        s[j] = '\"';
                        break;

                    default:
                        s[j++] = '\\';
                        s[j] = t[i];
                }
                
                break;

            default:
                s[j] = t[i];
        }
        
        i++;
        j++;
    }

    // Copying null character
    s[j] = t[i];
}
