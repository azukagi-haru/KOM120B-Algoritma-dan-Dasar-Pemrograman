#include <stdio.h>
#define SIZE 1000

int main() {
    long long int num, offset = 1, highest, highest_val = 0;
    long long int arr[SIZE] = {0};

    while (num != -9) {
        scanf("%lld", &num);
        arr[num - offset] += 1;
    }

    for (int j=0; j < SIZE; j++) {
        if (arr[j] != 0) {
            if (arr[j] >= highest_val) {
                highest_val = arr[j];
                highest = j + offset;
            }
        }
    }

    printf("%lld\n", highest);

    return 0;
}