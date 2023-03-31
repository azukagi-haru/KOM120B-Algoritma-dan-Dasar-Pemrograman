#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct rec {
    char kata[50];
    int jumlah;
    int posisi[50];
};

typedef struct rec REC;

int main() {
    int n = 500;
    char baris[500], *tmp;
    REC *p;
    REC data[500];
    REC exp = {"bogor", 4, {1, 20, 30, 90}};

    p = (REC *)malloc(n * sizeof(REC));

    int i=0;
    while(scanf("%s", baris) != EOF) {
        tmp = strtok(baris, ";");
        printf("%s\n", tmp);

        while (tmp != NULL) {
            tmp = strtok(NULL, ";");
            printf("%s\n", tmp);
        }
        i++;
    }

    printf("%s(%d):", exp.kata, exp.jumlah);
    for(int i=0; i < exp.jumlah; i++) {
        if (i == (exp.jumlah - 1)) printf("%d", exp.posisi[i]);
        else printf("%d->", exp.posisi[i]);
    }
    printf("\n");

    return 0;
}