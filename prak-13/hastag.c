#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* getln() {
    char *str, c;
    int i = 0, j = 1;
    str = (char*)malloc(sizeof(char));
    while (c != '\n') {
    c = getc(stdin); // baca character dari stdin
    str = (char*)realloc(str, j * sizeof(char));
    str[i] = c;
    i++; j++;
    }
    str[i] = '\0'; // tanda akhir dari string
    return str;
}