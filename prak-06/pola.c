#include <stdio.h>

double abs_val(double number) {
    if (number >= 0) return number;
    else return -1 * number;
}

int main() {
    long long int case_count, row, col, ci, cj;

    scanf("%lld", &case_count);

    for ( ; case_count-- > 0; ) {

        scanf("%lld", &row);
        scanf("%lld", &col);
        scanf("%lld", &ci);
        scanf("%lld", &cj);

        for (int i = 0; i++ < row; ) {
            for (int j = 0; j++ < col; ) {
                if (abs_val(ci - i) == abs_val(cj - j)) printf("*");
                else printf(".");
            }
            printf("\n");
        }

        printf("\n");
    }
    return 0;
}