#include <stdio.h>

int main() {
    long long int n, k, num;
    double avg, sum = 0, z = 0;

    scanf("%lld %lld", &n, &k);

    if (n == 0 || n < k) {
        printf("%.2lf\n", z);
        return 0;
    }

    for (int position = 1; position <= n; position++) {
        scanf("%lld", &num);
        if (k != 0) {
            if (position % k == 0) {
                sum += num;
            }
        }
        else continue;
    }

    avg = sum / (n/k);
    printf("%.2lf\n", avg);

    return 0;
}