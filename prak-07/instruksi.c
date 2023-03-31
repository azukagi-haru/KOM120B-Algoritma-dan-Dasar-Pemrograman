// instruksi.c

#include <stdio.h>

int main() {

    long long int ins, n = 0, tmp;

    do {
        scanf("%lld", &ins);
        switch(ins) {
            case 1: scanf("%lld", &tmp);
                    n = tmp; break;
            case 2: scanf("%lld", &tmp);
                    n += tmp; break;
            case 3: scanf("%lld", &tmp);
                    n -= tmp; break;
            case 4: scanf("%lld", &tmp);
                    n *= tmp; break;
            case 5: scanf("%lld", &tmp);
                    n /= tmp; break;
            case 9: printf("%lld\n", n);
        }
    } while (ins != 0);
    
    return 0;
}