#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, sum_di = 0, sum_anti = 0;
    scanf("%d", &n);

    int *darr[n];
    for (int a=0; a<n; a++) {
        darr[a] = (int *)malloc(n*sizeof(int));
        memset(darr[a], 0, (n*sizeof(int)));
    }

    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &darr[i][j]);
        }
    }

    for (int p=0; p<n; p++) {
        for (int q=0; q<n; q++) {
            if (p == q) {
                sum_di += darr[p][q];
                sum_anti += darr[p][n-q-1];
            }
        }
    }


    printf("%d %d\n", sum_di, sum_anti);

    /*
    for (int p=0; p<n; p++) {
        for (int q=0; q<n; q++) {
            printf("%d ", darr[p][q]);
        }
        printf("\n");
    } */
    

    return 0;
}