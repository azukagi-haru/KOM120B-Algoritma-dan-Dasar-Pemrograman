#include <stdio.h>
#define SIZE 1000

/*void reverse_matrix(int row, int col, int matrix[row][col]) {
    int tmp;
    for (int k=0; k < row; k++) {
        for (int l=0; l < col/2; l++) {
            tmp = matrix[k][l];
            matrix[k][l] = matrix[k][col-1-l];
            matrix[k][col-1-l] = tmp;
        }
    }
}
*/
void reverse_array(int n, int array[n]) {
    int tmp;
    for (int i=0; i < n/2; i++) {
        tmp = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = tmp;
    }
}

void reverse_matrix(int row, int col, int matrix[row][col]) {
    for (int k=0; k < row; k++) {
        reverse_array(col, matrix[k]);
    }
}

void print_matrix(int row, int col, int matrix[aa]) {
    for (int m=0; m < row; m++) {
        for (int n=0; n < col; n++) {
            printf("%d", *(matrix+m*n+n));
            if (n == (col - 1)) printf("\n");
            else printf(" ");
        }
    }
}

int main() {
    int row, col;
    int matrix[SIZE][SIZE] = {{0}, {0}};

    scanf("%d %d", &row, &col);

    // input the data into the matrix
    for (int i=0; i < row; i++) {
        for (int j=0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    print_matrix(row, col, &matrix);


    return 0;
}
    