/*  Write the function htoi(s), which converts a string of hexadecimal digits 
    (including an optional 0x or 0X) into its equivalent integer value. The 
    allowable digits are 0 through 9, a through f, and A through F.
*/

// Author: Nikhil Singh
// Last Modified: 22/02/2022


#include <stdio.h>


unsigned long htoi(const char s[]);


int main(void) {

    printf("\nTesting htoi(*s) funtion - \n\n");
    printf("Integer equivalent of hex(0xFA9C):> %ld\n", htoi("0xFA9C"));
    printf("Integer equivalent of hex(0xFA9C):> %ld\n", htoi("0xFFFF"));
    printf("Integer equivalent of hex(0xFA9C):> %ld\n", htoi("0xF1F1"));
    printf("Integer equivalent of hex(0xFA9C):> %ld\n", htoi("0xBCDA"));
    return 0;
}


unsigned long htoi(const char s[]) {

    unsigned long intVal = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        
        // For identifying hex digits
        if(s[i] == '0' && s[i + 1] == 'x' || s[i + 1] == 'X') {
            i++;  
            continue;
        }
        else if(s[i] >= '0' && s[i] <= '9') {
            intVal = 16 * intVal + (s[i] - '0');
        }
        else if(s[i] >= 'a' && s[i] <= 'f') {
            intVal = 16 * intVal + (s[i] - 'a' + 10);
        }
        else if(s[i] >= 'A' && s[i] <= 'F') {
            intVal = 16 * intVal + (s[i] - 'A' + 10);
        }
        else break;
    }

    return intVal;
}
