#include <stdio.h>

int main() {
    long long int num, result;
    scanf("%lld", &num);
    if (num < 0) {num = -1 * num;}
    result = num % 100 / 10 * 7;
    printf("%lld\n", result);
    return 0;
}
