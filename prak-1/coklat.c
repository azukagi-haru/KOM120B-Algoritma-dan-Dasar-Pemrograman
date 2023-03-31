#include <stdio.h>
#include <math.h>

int main() {
    /*c = coklat, n = output, b = sisi kiri persamaan (n(n+1)) */
    int c, n, b;
    /* Kenapa tidak perlu c = ? karena & itu sudah assign */
    scanf("%d", &c);
    /* int untuk menjadikan data yang tadinya float menjadi int, 2.0 itu supaya datanya jadi float karena sqrt() expect-nya argumen dalam float */
    n = (int)sqrt(2.0*c);
    b = n * (n + 1);

    /* cek jika n estimasi sudah cukup */
    if (b <= 2*c) {
        printf("%d\n", n+1);
    }
    else {
        printf("%d\n", n);
    }
    return 0;
}