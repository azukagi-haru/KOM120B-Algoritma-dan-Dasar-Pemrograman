// program that reads a text, then
// counts how many times each number
// shows up.

// mirip frekuensi.c dari prak-8, tinggal diganti array
// -nya jadi 26 (jumlah huruf alhphabet)

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char ch, tmp, alphabet[26] = {0};

    // perhitungan mengacu pada posisi char dalam ascii
    int n=0;
    do {
        scanf("%c", &tmp);
        if ((tmp > 64) && (tmp < 90)) {
            alphabet[tmp - 64 - 1] += 1;
        }
        else if ((tmp > 96) && (tmp < 123)) {
            alphabet[tmp - 96 - 1] += 1;
        }
        n++;
    } while (tmp != '\n');

    // print arraynya kalau nilai nya tidak nol
    for (int j=0; j < 26; j++) {
        if (alphabet[j] != 0) printf("%c ada %d\n", j + 97, alphabet[j]);
    }

    return 0;
}