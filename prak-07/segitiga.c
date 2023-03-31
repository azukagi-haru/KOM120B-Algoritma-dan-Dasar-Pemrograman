// segitiga.c

#include <stdio.h>

int main() {

    long long int n;

    scanf("%lld", &n);

    for (int i=0; i++ < n; ) {
        for (int j=0; j++ < i; ) {
            if (j == 1 || j == i || i == n ) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}