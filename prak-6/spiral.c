#include <stdio.h>

/*
long long int gen(int last_element, int column, int direction) {

    long long int tail = 0, start;

    // onward direction
    if (direction == 1) {
        for (int j=0; j++ % 10 < column; ) {
            printf("%d ", j);
            tail = j;
        }
    }

    // reverse direction
    else if (direction == 0) {
        start = (last_element + column) % 10;
        for (int k=0; k++ < column ; start--){
            printf("%lld ", start);
        }
        tail = start;
    }

    return tail;
}
*/

int main() {
    long long int row, col, tail = 0, start, num;

    scanf("%lld %lld", &row, &col);
    
    for (int i=0; i++ < row; ) {

        // onward direction
        if (i % 2 != 0) {
            start = tail + 1;
            num = start;
            for (int j=0; j++ < col; num = ((num + 1) % 10)) {  
                printf("%lld ", num);
            }
            tail = num - 1;
        }

        // reverse direction
        else {
            start = (tail + col) % 10;
            num = start;
            for (int k=0; k++ < col; num = (((num - 1) + 10) % 10)) {
                printf("%lld ", num);
            }
            tail = start;
        }

        // printf("    %lld", tail); to check the tails' value

        printf("\n");

    }

    return 0;
}