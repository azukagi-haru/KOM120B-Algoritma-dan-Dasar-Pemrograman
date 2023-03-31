#include <stdio.h>

int main() {
    long long int baris, anak, tengah;

    scanf("%lld", &baris);

    // Jika jumlah baris genap, kita print "*" ketua dulu baru balok m x n sesuai jumlah anak per baris
    if (baris % 2 == 0) {
        printf("*\n");
        for (int m=1; m <= baris; m++) {
            scanf("%lld", &anak);
            for (int n=1; n <= anak; n++) {
                printf("*");
            }
            printf("\n");
        }
    }

    // Jika jumlah baris ganjil, kita langsung print balok, tapi tentukan dulu apa karakter pertamanya, baru print "*" anak sesuai jumlah anak per baris
    else {
        tengah = (baris + 1) / 2;

        for (int i=1; i <= baris; i++) {
            if (i != tengah) printf(" ");
            else printf("*");

            scanf("%lld", &anak);
            for (int j=1; j <= anak; j++) {
                printf("*");
            }
            printf("\n");
        }

    }
    return 0;
}