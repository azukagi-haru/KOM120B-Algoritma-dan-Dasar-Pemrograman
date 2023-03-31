#include <stdio.h>
#include <stdlib.h>

// define a function that take an array and returns the sum
int array_n_sum(int start, int end, int *arr) {
    int sum = 0;
    while (start != end) {
        sum += arr[start];
        start++;
    }
    return sum;
}

int main() {
    int n, len_box;
    int *array;

    // make and fill the array
    scanf("%d", &n);
    array = malloc(sizeof(int)*n);
    for (int p=0; p<n; p++) scanf("%d", &array[p]);

    // length of the boxes
    len_box = array_n_sum(0, n, array) / 2;

    // check if the firsts elements count up to len_box
    int try;
    for (int i=0; i<n; i++) {
        try = array_n_sum(0, i, array);
        if (try == len_box) {
            printf("%d\n", len_box);
            break;
        }
    }

    // if not, then just print "-1"
    if (try != len_box) printf("%d\n", -1);

    return 0;
}