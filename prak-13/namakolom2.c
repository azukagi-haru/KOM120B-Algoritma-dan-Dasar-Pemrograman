#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 250

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
    int n, age, sum = 0;
    double avg;
    char **nama, *tmp, *token;
    char separator[2] = ";";
    char separator_too = ';';

    scanf("%d ", &n);

    nama = (char **)malloc(n*sizeof(char *));

    for(int i=0; i<n; i++) {
        // define the array for the strings
        nama[i] = (char *)malloc(250*sizeof(char));
        tmp = (char *)malloc(250*sizeof(char));

        fgets(tmp, SIZE, stdin);
        tmp = trim(tmp);

        // after the separator
        nama[i] = strchr(tmp, separator_too);
        nama[i]++;  // we want to start after the semicolon

        // before the separator
        strtok(tmp, separator);
        age = atoi(tmp);
        sum += age;
    }

    // print out the names
    for (int j=0; j<n; j++) printf("%s\n", nama[j]);

    // print out the average age
    avg = sum*1.0 / n;
    printf("%.2lf\n", avg);

    return 0;
}