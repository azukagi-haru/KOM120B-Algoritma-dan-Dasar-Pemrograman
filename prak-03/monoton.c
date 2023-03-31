#include <stdio.h>

int main() {
    long long int a,b,c,d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

    if (a==b && b==c && c==d) printf("KONSTAN\n");
    else if (a<=b && b<=c && c<=d) printf("MONOTON MENAIK\n");
    else if (a>=b && b>=c && c>=d) printf("MONOTON MENURUN\n");
    else printf("TIDAK MONOTON\n");
}