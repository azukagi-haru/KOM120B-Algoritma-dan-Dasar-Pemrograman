#include <stdio.h>

int main() {
    int uts, uas;
    float avg;
    scanf("%d%d", &uts, &uas);
    avg = (uts + uas) / 2.00;
    if (avg > 60.00) {
        if (uts > 40 && uas > 40) printf("LULUS\n");
        else printf("LULUS BERSYARAT\n");
    }
    else if (avg < 60) printf("TIDAK LULUS\n");

    return 0;
}