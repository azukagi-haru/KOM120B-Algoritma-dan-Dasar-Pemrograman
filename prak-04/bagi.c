/*

int a,b, div_counter = 0;

while a != -1 {
    scan(a,b)
    if (a % b == 0 || b % a == 0) div_counter++
}

print(div_counter)

*/

#include <stdio.h>

int main() {
    long long int a, b, div_counter;

    div_counter = 0;

    while (1) {
        scanf("%lld", &a);
        if (a == -1) break;
        scanf("%lld", &b);

        if (a != 0 && b != 0) {
            if (a % b == 0 || b % a == 0) div_counter++;
        }
        else if ((a == 0 && b == 0)) continue;
        else if (a == 0) {
            if (a % b == 0) div_counter++;
        }
        else if (b == 0) {
            if (b % a == 0) div_counter++;
        }
    }

    printf("%lld\n", div_counter);

    return 0;
}