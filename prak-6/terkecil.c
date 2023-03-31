#include <stdio.h>

int main() {
    long long int case_counter, num_counter, num, smallest;

    scanf("%lld", &case_counter);

    for (int i = 0; i++ < case_counter; ) {
        scanf("%lld", &num_counter);
        scanf("%lld", &smallest);

        for (int j = 1; j++ < num_counter; ) {
            scanf("%lld", &num);
            if (num < smallest) smallest = num;
        }

        printf("%lld\n", smallest);
    }
    return 0;
}