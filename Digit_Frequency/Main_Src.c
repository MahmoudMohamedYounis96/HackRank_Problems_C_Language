/* Problem's link :
	https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
*/
/********************************** 
* \Name		main.c
* 
* \Date		4/8/200
*	
* \Author	Mahmoud Mohamed Youness.
*/

/*==================== Incldues ====================*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

/*==================== Defintions ====================*/
#ifndef STR_NUM
#define STR_NUM     1000
#endif

/*==================== Function declaration ====================*/
uint16_t GetDigitFrequency(uint8_t str[], uint8_t Digit) {
    uint16_t counter = 0;
    for (uint16_t i = 0; i < STR_NUM; i++) {
        if (str[i] == Digit) {
            counter++;
        }
        else {
            continue;
        }
    }
    return counter;
}

/*==================== Main function ====================*/
int16_t main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    uint8_t S[STR_NUM] = "\0";

    // Scan the string.
    scanf_s("%1000s", S, (unsigned)_countof(S));

    // Search About each digit in the scanned string.
    for (char i = '0'; i <= '9'; i++) {
        printf("%d ", GetDigitFrequency(S, i));
    }

    return 0;
}
