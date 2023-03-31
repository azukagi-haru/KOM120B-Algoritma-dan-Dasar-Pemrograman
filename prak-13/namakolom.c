#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 400

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
    int n, kolom = 2, age, sum = 0;
    double avg;
    char **nama, *tmp;

    scanf("%d ", &n);

    nama = (char **)malloc(n*sizeof(char *));

    for(int i=0; i<n; i++) {
        // define the array for the strings
        nama[i] = (char *)malloc(250*sizeof(char));
        tmp = (char *)malloc((kolom+1)*sizeof(char));

        // take first 2 chars, then add it to total age
        fgets(tmp, (kolom+1), stdin);
        age = atoi(tmp);
        sum += age;

        // take the rest of the chars, add it to an array
        fgets(nama[i], SIZE-kolom, stdin);
        nama[i]=trim(nama[i]);
    }

    // print out the names
    for (int j=0; j<n; j++) printf("%s\n", nama[j]);

    // print out the average age
    avg = sum*1.0 / n;
    printf("%.2lf\n", avg);

    return 0;
}