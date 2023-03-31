#include <stdio.h>

int main() {
    long long int permen, murid, jatah, lebih;

    scanf("%lld", &permen);
    scanf("%lld", &murid);

    // Tadinya mau pakai ini vvv, tapi ternyata sama aja dengan modulo
    //lebih = permen - ((permen/murid) * murid);
    lebih = permen % murid;

    for (int i=0; i < murid; i++) {

        // Di sini pembagian integer, jadi pembulatan ke bawah
        jatah = permen / murid;

        // Karena pembulatan ke bawah, jatahnya kita tambahkan (+1) ke murid yang posisi akhir2
        if (i == (murid - lebih)) {
            jatah += 1;
            lebih -= 1;
        }

        printf("%lld ", jatah);
    }

    return 0;
}