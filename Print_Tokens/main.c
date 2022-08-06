/* Problem Link 
        https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=true 
 */

 /**********************************
 * \Name		main.c
 *
 * \Date		4/8/200
 *
 * \Author	Mahmoud Mohamed Youness.
 */

// =============================== Includes ===============================
// stdin 
#include <stdio.h>
#include <stdlib.h>

// Math
#include <math.h>

// Int Types
#include <stdint.h>

// char type Funcions.
#include <ctype.h>

// String.
#include <string.h>

// ================================ Public Function =========================
void PrintTokens(char *s) {
    for (uint16_t i = 0; *(s + i) != '\0'; i++) {
        if (isspace(*(s + i))) {
            printf("\n");
        }
        else if (!(isspace(*(s + i)))) {
            printf("%c", *(s + i));
        }
        else {
            //Do Nothing.
        }
    }
    return;
}

// =============================== Main Function ============================
int main() {

    char* s;
    s = (char*)malloc(1024 * sizeof(char));

    scanf_s("%1024[^\n]", s, 1024);
    
    PrintTokens(s);
    
    return 0;
}
