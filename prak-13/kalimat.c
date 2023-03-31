#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// this func is to trim trailing whitespace at the end of a string
char *trim(char *s) {
    char *ptr;
    if (!s) return NULL;    // NULL string
    if (!*s) return s;      // empty string
    for (ptr = s + strlen(s) - 1; (ptr >= s) && isspace(*ptr); --ptr);
    ptr[1] = '\0';
    return s;
}

int main() {
    int n, order;
    char **judul;

    scanf("%d ", &n);

    judul = (char **)malloc(n*sizeof(char *));

    // this take an array of strings
    for(int i=0; i<n; i++) {
        judul[i] = (char *)malloc(250*sizeof(char));
        fgets(judul[i], 250, stdin);
        judul[i]=trim(judul[i]);        // trim a string
    }
    
    // this takes the order for the strings then print it accordingly
    scanf("%d", &order);
    while (order != -9) {
        printf("%s\n", judul[order - 1]);
        scanf("%d", &order);
    }

    return 0;
}