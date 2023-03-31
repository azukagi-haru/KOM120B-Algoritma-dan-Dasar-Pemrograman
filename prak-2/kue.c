#include <stdio.h>

int main() {
    long long int p, a, hasil;
    scanf("%lld", &p);
    a = 2;
    hasil = (2*a + (p-1)*(p+2)) / 2;
    printf("%lld\n", hasil);
    return 0;
}