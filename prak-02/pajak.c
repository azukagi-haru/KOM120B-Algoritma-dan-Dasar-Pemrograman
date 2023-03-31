#include <stdio.h>

int main() {
    double C, sebelum_pajak;
    scanf("%lf", &C);
    sebelum_pajak = C / 1.15;
    printf("%.2lf\n", sebelum_pajak);
    return 0;
}