#include <stdio.h>

int main() {
    long long int num, a, digit, tmp, reversed, result;

    reversed = 0;
    digit = 1;

    scanf("%lld", &num);

    a = num;

    while (a != 0) {
        digit *= 10;
        a /= 10;
    }

    digit /= 10;

    for (int i = 10; num != 0; i = i * 10, digit /= 10) {
        tmp = num % 10;
        reversed += (tmp * digit);
        num = (num - tmp) / 10;
    }

    result = reversed * 3;
    printf("%lld\n", result);

    return 0;
}