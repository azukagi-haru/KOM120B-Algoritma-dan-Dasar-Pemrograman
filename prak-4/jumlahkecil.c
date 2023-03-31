#include <stdio.h>

int main() {
    long long int counter, num, smallest, same_counter;
    int i = 0;

    scanf("%lld", &counter);

    smallest = num;
    same_counter = 0;

    while (i++ < counter) {
        scanf("%lld", &num);
        if (num == smallest) same_counter++;
        if (num < smallest) {
            smallest = num;
            same_counter = 1;
        }
    }

    printf("%lld %lld\n", smallest, same_counter);

    return 0;
}