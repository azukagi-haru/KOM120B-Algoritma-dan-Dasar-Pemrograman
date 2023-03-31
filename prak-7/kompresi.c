// kompresi.c

#include <stdio.h>

int main() {

    long long int case_counter, num, same_counter, before = -1;

    scanf("%lld", &case_counter);
    for (int i=0; i++ < case_counter; ) {

        same_counter = 1;
        do {
            scanf("%lld", &num);
            if (num == before) {
                same_counter++;
            }
            else if (before != -1) {
                printf("%lld(%lld)", before, same_counter);
                same_counter = 1;
            }
            before = num;
        } while (num != -1);
        printf("\n");
    }

    return 0;
}