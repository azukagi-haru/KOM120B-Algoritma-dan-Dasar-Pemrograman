#include <stdio.h>

int main() {
    long long int a,b,c;
    int cek_a, cek_b;
    scanf("%lld%lld%lld", &a, &b, &c);

    cek_a = c < a;
    cek_b = c < b;

    if (c==a || c==b) printf("tepi\n");
    else if (cek_a && cek_b) printf("kiri\n");
    else if (cek_a || cek_b) printf("tengah\n");
    else printf("kanan\n");

}