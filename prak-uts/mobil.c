#include <stdio.h>

int main() {

    // ganti mulai dari 1 karena di akhir pasti ganti ke perseneling stop, jadi ditambah 1
    // prev_mode mulai dari 0 (berhenti)
    long long int counter, tinggi, mode, prev_tinggi, prev_mode = 0, ganti = 1;

    // kita scan ketinggian pertama di awal, biar dapet prev_tinggi buat dibandingin
    scanf("%lld", &counter);
    scanf("%lld", &prev_tinggi);

    // loop ke semua input ketinggian (mulai dari yang ke-2)
    for (int i=1; i < counter; i++) {

        scanf("%lld", &tinggi);

        // mode untuk menunjukkan dia mendatar, naik, atau turun
        if (tinggi == prev_tinggi) mode = 1;
        else if (tinggi > prev_tinggi) mode = 2;
        else if (tinggi < prev_tinggi) mode = 3;

        // kalau modenya beda, berarti telah terjadi pergantian perseneling
        if (mode != prev_mode) ganti += 1;

        // kita update variabel yang "sekarang" menjadi variabel "sebelumnya" untuk dibandingin dengan input berikutnya
        prev_tinggi = tinggi;
        prev_mode = mode;
    }

    printf("%lld", ganti);
    return 0;
}