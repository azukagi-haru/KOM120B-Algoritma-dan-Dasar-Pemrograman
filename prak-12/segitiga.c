#include <stdio.h>

int main() {

    int n;
    char ch1, ch2, ch3;

    scanf("%d ", &n);
    scanf("%c%c%c", &ch1, &ch2, &ch3);

    // abaikan, ini buat debugging
    // printf("%d, %c, %c, %c \n", n, ch1, ch2, ch3);
    
    // intinya kayak segitiga.c di prak-7 tapi baris terakhir dipisah
    for (int i=0; i++<(n-1); ) {
        for (int j=0; j++<i; ) {
            if (j == 1) printf("%c", ch1);
            else if (j == i) printf("%c", ch3);
            else printf(" ");
        }
        printf("\n");
    }

    for (int k=0; k<n; k++) {
        if (k == n-1) printf("%c", ch3);
        else printf("%c", ch2);
    }
    printf("\n");

    return 0;
}