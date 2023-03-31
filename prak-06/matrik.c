#include <stdio.h>

int main() {
    long long int k, row, col, num;

    scanf("%lld", &k);
    scanf("%lld", &row);
    scanf("%lld", &col);

    for (int i=0; i++ < row; ) {
        for (int j=0; j++ < col; ) {
            scanf("%lld", &num);
            printf("%lld ", num);;
            if (((i-1)*col + j) >= k) {
                goto end;
            }
        }
        printf("\n");
    }

    end:
    while (k++ < (row * col)) {
        printf("0 ");
        if (k % col == 0) printf("\n");
    }

    return 0;
}