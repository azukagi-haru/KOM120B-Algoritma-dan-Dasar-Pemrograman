#include <stdio.h>
#define SIZE 100

int main() {
    long long int row, col, tmp;
    long long int matrix[SIZE][SIZE] = {{0}, {0}};

    scanf("%lld %lld", &row, &col);

    // input the data into the matrix
    for (int i=0; i < row; i++) {
        for (int j=0; j < col; j++) {
            scanf("%lld", &matrix[i][j]);
        }
    }

    // for each col in the matrix, perform the reversion algorithm
    for (int l=0; l < col; l++) {
        for (int k=0; k < row/2; k++) {
            tmp = matrix[k][l];
            matrix[k][l] = matrix[row-1-k][l];
            matrix[row-1-k][l] = tmp;
        }
    }

    // print back the matrix
    for (int m=0; m < row; m++) {
        for (int n=0; n < col; n++) {
            printf("%lld", matrix[m][n]);
            if (n == (col - 1)) printf("\n");
            else printf(" ");
        }
    }

    return 0;
}