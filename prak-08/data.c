#include <stdio.h>

int main() {
    long long int n, num, sum = 0, less = 0, more = 0;
    double avg;

    scanf("%lld", &n);
    long long int arr[n];

    for (int i=0; i < n; i++) {
        scanf("%lld", &num);
        sum += num;
        arr[i] = num;
    } 

    avg = (1.0 * sum) / n;

    for (int j=0; j < n; j++) {
        if (arr[j] < avg) less += 1;
        else if (arr[j] > avg) more += 1;
    }

    printf("%.2lf %lld %lld\n", avg, less, more);
}