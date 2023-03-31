#include <stdio.h>
#define SIZE 100

int main() {
    long long int row, col, num, col_index;
    long long int array[SIZE] = {0};

    scanf("%lld %lld", &row, &col);

    for (int i=0; i < row*col; i++) {
        col_index = i % col;
        scanf("%lld", &num);
        if (num != 0) array[col_index] += 1;
    }

    for (int m=0; m < col; m++) {
        if (m == col -1) printf("%lld\n", array[m]);
        else printf("%lld ", array[m]);
    }

    return 0;
}

// scan row, col
// create empty 1D array with the size of col
// scan through the input
// use for i loop
// i mod col, if num != 0 then array[i] += 1
// print the array