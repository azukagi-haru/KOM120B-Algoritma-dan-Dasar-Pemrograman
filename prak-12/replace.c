#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// make c1 c2, tmp
// go through all chars
// if char == c1, tmp = c2, print tmp

int main() {

    char c1, c2, tmp;

    scanf("%c %c ", &c1, &c2);

    int n=0;
    do {
        scanf("%c", &tmp);
        if (tmp == c1) tmp = c2;
        else if (tmp == toupper(c1)) tmp = toupper(c2);
        printf("%c", tmp);
        n++;
    } while (tmp != '\n');

    return 0;
}