#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// incomplete :(

int main() {
    int i, limit = 30, sum = 0;
    char para[5001], *tmp;
    char ch;
    const char *delimiter = " ";
    
    /*
    while () {
        i = 0;
        while ((ch=getchar()) != '\n') {
            para[i] = ch;
            i++;
        }
        para[i+1] = '\0';
    }
    */

    i = 0;
    while ((ch=getchar()) != '\n') {
        para[i] = ch;
        i++;
    }
    para[i+1] = '\0';

    tmp = strtok(para, delimiter);
    sum += strlen (tmp);
    printf("%d", sum);

    while (tmp != NULL) {
        tmp = strtok(NULL, delimiter);
        while (sum <= limit) {
            sum += strlen (tmp);
        } 
        printf("%s\n", tmp);
        // print out all there is
        printf("%d", sum);
    }
    

    

    return 0;
}