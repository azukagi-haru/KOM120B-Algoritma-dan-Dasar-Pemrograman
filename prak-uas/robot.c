#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char ch, *tmp;
    int m, n, rx, ry, tmpx, tmpy, west = 0, east = 0, north = 0, south = 0, biggest;

    scanf("%d %d\n", &m, &n);

    char rows[1001][1001];

    for (int p=0; p<m; p++) {
        int q = 0;
        while ((ch=getchar()) != '\n') {
            rows[p][q] = ch;
            if (ch == 'R') {
                rx = q;
                ry = p;
            }
            q++;
        }   
    }

    /*
    for (int a=0; a<m; a++) {
        for (int b=0; b<n; b++) {
            printf("%c", rows[a][b]);
        }
        printf("\n");
    }
    */

    // west
    tmpx = rx;
    tmpy = ry;
    while ((rows[tmpy][tmpx] != '#') && ((tmpx >= 0))) {
        char tmpchar = rows[tmpy][tmpx];

        if (isdigit(tmpchar)) {
            west += (tmpchar - '0');
        }

        tmpx--;
    }

    biggest = west;

    // east
    tmpx = rx;
    tmpy = ry;
    while ((rows[tmpy][tmpx] != '#') && ((tmpx <= (n-1)))) {
        char tmpchar = rows[tmpy][tmpx];

        if (isdigit(tmpchar)) {
            east += (tmpchar - '0');
        }

        tmpx++;
    }

    if(east > biggest) biggest = east;

    // north
    tmpx = rx;
    tmpy = ry;
    while ((rows[tmpy][tmpx] != '#') && ((tmpy >= 0))) {
        char tmpchar = rows[tmpy][tmpx];

        if (isdigit(tmpchar)) {
            north += (tmpchar - '0');
        }

        tmpy--;
    }

    if(north > biggest) biggest = north;

    // south
    tmpx = rx;
    tmpy = ry;
    while ((rows[tmpy][tmpx] != '#') && ((tmpy <= (m-1)))) {
        char tmpchar = rows[tmpy][tmpx];

        if (isdigit(tmpchar)) {
            south += (tmpchar - '0');
        }

        tmpy++;
    }

    if(south > biggest) biggest = south;

    printf("%d\n",biggest);

    return 0;
}