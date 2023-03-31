#include <stdio.h>
#define SIZE 1000

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

    // for each row in the matrix, perform the reversion algorithm
    for (int k=0; k < row; k++) {
        for (int l=0; l < col/2; l++) {
            tmp = matrix[k][l];
            matrix[k][l] = matrix[k][col-1-l];
            matrix[k][col-1-l] = tmp;
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


// SIZE 100
// scan kol, row
// input each data to matrix
// call previous matrix
// do reversion algorithm to each row
// print the new matrix