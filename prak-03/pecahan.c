#include <stdio.h>

// input: nilai dengan angka di belakang koma (bil. desimal)
// output: pisahin bil. bulat dengan pecahannya, nilai pecahannya dipotong (5 angka), bukan di-round

int main() {
    // p -> pajak aka inputnya; pecahan -> nilai komanya; new, pecahan_bulat & result hanya utk membantu mencari jawaban
    // bulat -> nilai sebelum komanya
    double p, pecahan;
    int bulat;
    scanf("%lf", &p);

    // ambil bilangan bulatnya, ambil nilai pecahan (lengkap)-nya
    bulat = (int)p;
    pecahan = p - bulat;

    // print bilangan bulat dan pecahannya (batasi pecahan dgn %.5lf supaya ga ada angka 0 di belakang)
    printf("%d %.5lf\n", bulat, pecahan);
}