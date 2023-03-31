#include <stdio.h>
#define SIZE 1000

int main() {
    long long int tmp, num;
    long long int array1[SIZE] = {0};

}

// input all tmp in n to array 1
// scan through each num in m
// set the first element in array 1 to be current_highest
// check, if num <= current_highest, print num, else print current_highest; current_highest = 

/*
int main() {
    long long int num, num2, prev_num = 0, last_num = 0;
    long long int array1[SIZE] = {0};

    int i, k = 0;

    while (1) {
        scanf("%lld", &num);
        if (num == -9) break;
        array1[i] = num;
        i++;
    }

    printf("%lld\n", array1[3]);
/*
    for (int j=0; num2 != -9; j++) {
        scanf("%lld", &num2);
        if (num2 == prev_num) printf("%lld ", num2);
        else {
            k = 0;
            while (array1[k] > prev_num && array1[k] <= num2) {
                printf("%lld ", array1[k]);
                k++;
            }
            printf("%lld ", num2);
        }
        prev_num = num2;
    }

    /*while (num != -9) {
        
    }

    return 0;
}

*/