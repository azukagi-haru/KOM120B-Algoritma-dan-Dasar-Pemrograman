#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SPACE 32

int main() {

    char prev = '0', tmp, upsized;

    // first of all, dealing with the first char
    scanf("%c", &tmp);
    upsized = toupper(tmp);
    printf("%c", upsized);
    prev = upsized;

    // second, go through all chars, if the prev char is a space, then make it uppercase
    int n=0;
    while (tmp != '\n') {
        scanf("%c", &tmp);
        if (prev == SPACE) {
            upsized = toupper(tmp);
            printf("%c", upsized);
            prev = upsized;
        }
        else {
            printf("%c", tmp);
            prev = tmp;
        }
        n++;
    }

    return 0;
}