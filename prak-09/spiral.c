// spiral.c
#include <stdio.h>
#define SIZE 100

int main() {
    long long int row, col, m, n, lower_max, right_max, upper_max, left_max, counter;
    long long int matrix[SIZE][SIZE] = {0};
    
    scanf("%lld %lld", &row, &col);
    
    // scan the input matrix
    for (int i=0; i < row; i++) {
        for (int j=0; j < col; j++) {
            scanf("%lld", &matrix[i][j]);
        }
    }

    // initial value
    lower_max = row;
    right_max = col;
    upper_max = -1;
    left_max = 0;
    m = 0;
    n = 0;
    counter = 0;

    // big loop
    while(1) {
        for( ; m < lower_max; m++, counter++) {
            printf("%lld", matrix[m][n]);
            if (counter == (row*col - 1)) printf("\n");
            else printf(" ");
        } 
        lower_max -= 1; m -= 1; n += 1;
        if (counter == row*col) break;

        for( ; n < right_max; n++, counter++) {
            printf("%lld", matrix[m][n]);
            if (counter == (row*col - 1)) printf("\n");
            else printf(" ");
        } 
        right_max -= 1; n -= 1; m -= 1;
        if (counter == row*col) break;

        for( ; m > upper_max; m--, counter++) {
            printf("%lld", matrix[m][n]);
            if (counter == (row*col - 1)) printf("\n");
            else printf(" ");
        }
        upper_max += 1; m += 1; n -= 1;
        if (counter == row*col) break;

        for( ; n > left_max; n--, counter++) {
            printf("%lld", matrix[m][n]);
            if (counter == (row*col - 1)) printf("\n");
            else printf(" ");
        }
        left_max += 1; n += 1; m += 1;
        if (counter == row*col) break;

    }

    /*
    // print matrix
    for (int p=0; p < row; p++) {
        for (int q=0; q < col; q++) {
            printf("%lld ", matrix[p][q]);
            if (q == (col - 1)) printf("\n");
            else printf(" ");
        }
    } */

    return 0;
}