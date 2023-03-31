#include <stdio.h>

int main() {
    int pecahan[] = {100, 50, 10, 5, 2, 1};
    int jumlah_pecahan = 6;
    int kembalian;
    int hasil_bagi;
    
    scanf("%d", &kembalian);
    
    for (int i = 0; i < jumlah_pecahan; i++) {
        hasil_bagi = kembalian/pecahan[i];
        printf("%d ", hasil_bagi);
        kembalian = kembalian % pecahan[i];
    }
    printf("\n");
    
    return 0;
}