#include <stdio.h>
#define TOTAL 201

int main() {
    long long int n, num, half = 100;
    long long int arr[TOTAL] = {0};

    scanf("%lld", &n);

    for (int i=0; i < n; i++ ) {
        scanf("%lld", &num);
        arr[num + half] += 1;
    }

    for (int j=0; j < TOTAL; j++) {
        if (arr[j] != 0) printf("%lld ada %lld\n", j - half, arr[j]);
    }

    return 0;
}